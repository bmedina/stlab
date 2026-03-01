---
layout: class
title: future<T, enable_if_not_copyable<void_to_monostate_t<T>>>
hyde:
  owner: sean-parent
  brief: __MISSING__
  tags:
    - class
  inline:
    description:
      - Consumer side of a one-shot result (non-copyable T). Use `get_ready()` or `get_try()`; `then`/`recover` only on rvalue.
  defined_in_file: stlab/concurrency/future.hpp
  declaration: "\nclass stlab::future;"
  dtor: unspecified
  typedefs:
    result_type:
      definition: T
      description: __INLINED__
      inline:
        description:
          - The type of the value this future holds.
  namespace:
    - stlab
    - v2_3_0
---
