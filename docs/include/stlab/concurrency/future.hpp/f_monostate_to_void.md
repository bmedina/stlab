---
layout: function
title: monostate_to_void
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - function
  inline:
    brief:
      - Converts `std::monostate` to void (no return); forwards other types unchanged.
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    "template <class T>\nauto monostate_to_void(T &&)":
      arguments:
        - description: __OPTIONAL__
          name: a
          type: T &&
      description: __INLINED__
      inline:
        description:
          - Converts `std::monostate` to void (no return); forwards other types unchanged.
      return: __OPTIONAL__
      signature_with_names: "template <class T>\nauto monostate_to_void(T && a)"
  namespace:
    - stlab
    - v2_3_0
---
