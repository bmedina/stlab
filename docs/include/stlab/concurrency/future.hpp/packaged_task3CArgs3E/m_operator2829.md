---
layout: method
title: operator()
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - method
  inline:
    brief:
      - Invokes the packaged callable with `args` and completes the associated future. Clears _co_handle before reset so ~shared_task() will not destroy the coroutine; the coroutine is destroyed in final_awaiter::await_suspend (coroutine is suspended there).
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    "template <class... A>\nvoid operator()(A &&...)":
      arguments:
        - description: __OPTIONAL__
          name: args
          type: A &&...
      description: __INLINED__
      inline:
        description:
          - Invokes the packaged callable with `args` and completes the associated future. Clears _co_handle before reset so ~shared_task() will not destroy the coroutine; the coroutine is destroyed in final_awaiter::await_suspend (coroutine is suspended there).
      return: __OPTIONAL__
      signature_with_names: "template <class... A>\nvoid operator()(A &&... args)"
---
