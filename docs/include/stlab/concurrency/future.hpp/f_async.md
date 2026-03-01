---
layout: function
title: async
hyde:
  owner: sean-parent
  brief: Creates a future running on a given executor
  tags:
    - function
  inline:
    brief:
      - Runs `f` with `args` on `executor` and returns a future for the result.
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    "template <class E, class F, class... Args>\nauto async(const E &, F &&, Args &&...) -> detail::reduced_t<detail::result_t<std::decay_t<F>, std::decay_t<Args>...>>":
      arguments:
        - description: __OPTIONAL__
          name: executor
          type: const E &
        - description: __OPTIONAL__
          name: f
          type: F &&
        - description: __OPTIONAL__
          name: args
          type: Args &&...
      description: __INLINED__
      inline:
        description:
          - Runs `f` with `args` on `executor` and returns a future for the result.
      return: __OPTIONAL__
      signature_with_names: "template <class E, class F, class... Args>\nauto async(const E & executor, F && f, Args &&... args) -> detail::reduced_t<detail::result_t<std::decay_t<F>, std::decay_t<Args>...>>"
  namespace:
    - stlab
    - v2_3_0
---
