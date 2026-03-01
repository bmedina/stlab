---
layout: function
title: invoke_void_to_monostate_result
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - function
  inline:
    brief:
      - Invokes `f` with `args` and returns its result, or `std::monostate{}` if the result is void.
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    "template <class F, class... Args>\nauto invoke_void_to_monostate_result(F &&, Args &&...)":
      arguments:
        - description: __OPTIONAL__
          name: f
          type: F &&
        - description: __OPTIONAL__
          name: args
          type: Args &&...
      description: __INLINED__
      inline:
        description:
          - Invokes `f` with `args` and returns its result, or `std::monostate{}` if the result is void.
      return: __OPTIONAL__
      signature_with_names: "template <class F, class... Args>\nauto invoke_void_to_monostate_result(F && f, Args &&... args)"
  namespace:
    - stlab
    - v2_3_0
---
