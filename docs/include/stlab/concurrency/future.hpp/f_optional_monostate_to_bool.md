---
layout: function
title: optional_monostate_to_bool
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - function
  inline:
    brief:
      - Returns `o.has_value()` when T is `std::monostate`, otherwise `std::move(o)`.
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    "template <class T>\nauto optional_monostate_to_bool(std::optional<T> &&)":
      arguments:
        - description: __OPTIONAL__
          name: o
          type: std::optional<T> &&
      description: __INLINED__
      inline:
        description:
          - Returns `o.has_value()` when T is `std::monostate`, otherwise `std::move(o)`.
      return: __OPTIONAL__
      signature_with_names: "template <class T>\nauto optional_monostate_to_bool(std::optional<T> && o)"
  namespace:
    - stlab
    - v2_3_0
---
