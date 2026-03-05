/*
    Copyright 2026 Adobe
    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
*/

/*
    Test: pre_exit handler ordering.

    Validates that a client pre_exit handler registered BEFORE the thread pool is initialized
    can still use the executor during pre_exit(). The thread pool teardown must run after all
    client handlers.

    On PORTABLE and WINDOWS backends, the teardown calls join() which destroys the pool. If
    the ordering is wrong, this test hangs and is killed by CTest's TIMEOUT property.

    On libdispatch (macOS), the teardown only waits on the dispatch group — the pool survives —
    so the test passes regardless. It remains valuable as a regression test for all platforms.
*/

#define DOCTEST_CONFIG_IMPLEMENT
#include <doctest/doctest.h>

#include <atomic>

#include <stlab/concurrency/default_executor.hpp>
#include <stlab/pre_exit.hpp>

namespace {

std::atomic<bool> client_handler_succeeded{false};

void client_handler() noexcept {
    // Schedule work on the executor and spin-wait for completion.
    // If the thread pool was already torn down, this hangs (PORTABLE/WINDOWS).
    std::atomic<bool> done{false};
    stlab::default_executor([&done]() noexcept { done = true; });
    while (!done) {
    }
    client_handler_succeeded = true;
}

} // namespace

TEST_CASE("pre_exit handler registered before executor init can still use executor") {
    // Register client handler BEFORE any executor use — this places it at index 0.
    stlab::at_pre_exit(client_handler);

    // Trigger lazy executor init — registers teardown handler at index 1+.
    std::atomic<bool> init_done{false};
    stlab::default_executor([&init_done]() noexcept { init_done = true; });
    while (!init_done) {
    }
}

int main(int argc, char** argv) {
    doctest::Context ctx;
    ctx.applyCommandLine(argc, argv);
    int res = ctx.run();
    if (ctx.shouldExit()) return res;

    // pre_exit() pops from back (LIFO). Without the fix, teardown (index 1) runs
    // before client_handler (index 0), destroying the pool first.
    stlab::pre_exit();

    // CHECK cannot be used outside a test case, so validate via return code.
    return res || !client_handler_succeeded;
}
