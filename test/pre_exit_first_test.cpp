/*
    Copyright 2026 Adobe
    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
*/

/*
    Test: stlab_at_pre_exit_first ordering.

    Validates that handlers registered via stlab_at_pre_exit_first are always executed last
    (popped last from the stack), regardless of when they are registered relative to normal
    at_pre_exit handlers. This is the mechanism used to ensure the thread pool teardown
    always runs after all client handlers.
*/

#define DOCTEST_CONFIG_IMPLEMENT
#include <doctest/doctest.h>

#include <vector>

#include <stlab/pre_exit.hpp>

extern "C" void stlab_at_pre_exit_first(stlab::pre_exit_handler f);

namespace {

std::vector<int> execution_order;

void handler_1() noexcept { execution_order.push_back(1); }
void handler_2() noexcept { execution_order.push_back(2); }
void handler_3() noexcept { execution_order.push_back(3); }

} // namespace

TEST_CASE("stlab_at_pre_exit_first handlers run after normal handlers") {
    // Register 1 normally.
    stlab::at_pre_exit(handler_1);

    // Register 2 at front — should always execute last.
    stlab_at_pre_exit_first(handler_2);

    // Register 3 normally.
    stlab::at_pre_exit(handler_3);

    // Stack: [2(front), 1, 3]
    // Pop order (LIFO): 3, 1, 2
}

int main(int argc, char** argv) {
    doctest::Context ctx;
    ctx.applyCommandLine(argc, argv);
    int res = ctx.run();
    if (ctx.shouldExit()) return res;

    stlab::pre_exit();

    // Verify: 3 runs first, then 1, then 2 (front-inserted) last.
    // CHECK/REQUIRE cannot be used outside a test case, so validate via return code.
    if (execution_order.size() != 3) return 1;
    if (execution_order[0] != 3) return 1;
    if (execution_order[1] != 1) return 1;
    if (execution_order[2] != 2) return 1;

    return res;
}
