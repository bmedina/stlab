---
layout: function
title: invoke_remove_monostate_arguments
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - function
  inline:
    brief:
      - Invokes `f` with `args` after removing `std::monostate` values (for void future results).
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    "template <class F, class... Args>\nauto invoke_remove_monostate_arguments(F &&, Args &&...)":
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
          - Invokes `f` with `args` after removing `std::monostate` values (for void future results).
      return: __OPTIONAL__
      signature_with_names: "template <class F, class... Args>\nauto invoke_remove_monostate_arguments(F && f, Args &&... args)"
  namespace:
    - stlab
    - v2_3_0
---
