---
layout: class
title: void_to_monostate<T>
hyde:
  owner: __MISSING__
  brief: __MISSING__
  tags:
    - class
  inline:
    description:
      - Maps `void` to `std::monostate` for uniform future result storage; other types unchanged.
  defined_in_file: stlab/concurrency/future.hpp
  declaration: "template <class T>\nstruct stlab::void_to_monostate;"
  ctor: unspecified
  dtor: unspecified
  typedefs:
    type:
      definition: std::conditional_t<std::is_void_v<T>, std::monostate, T>
      description: __MISSING__
  namespace:
    - stlab
    - v2_3_0
---
