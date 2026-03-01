---
layout: function
title: monostate_to_empty_tuple
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - function
  inline:
    brief:
      - Converts `std::monostate` to `std::tuple{}`; wraps other types in `std::tuple` for uniform application.
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    "template <class T>\nauto monostate_to_empty_tuple(T &&)":
      arguments:
        - description: __OPTIONAL__
          name: a
          type: T &&
      description: __INLINED__
      inline:
        description:
          - Converts `std::monostate` to `std::tuple{}`; wraps other types in `std::tuple` for uniform application.
      return: __OPTIONAL__
      signature_with_names: "template <class T>\nauto monostate_to_empty_tuple(T && a)"
  namespace:
    - stlab
    - v2_3_0
---
