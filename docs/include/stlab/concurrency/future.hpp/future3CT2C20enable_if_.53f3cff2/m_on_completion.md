---
layout: method
title: on_completion
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - method
  inline:
    brief: _multiple descriptions_
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    "template <class E, class F>\nvoid on_completion(E &&, F &&)":
      arguments:
        - description: __OPTIONAL__
          name: executor
          type: E &&
        - description: __OPTIONAL__
          name: f
          type: F &&
      description: __INLINED__
      inline:
        description:
          - Invokes `f` when this future completes (value or exception), on `executor`. Requires `f` is noexcept.
      return: __OPTIONAL__
      signature_with_names: "template <class E, class F>\nvoid on_completion(E && executor, F && f)"
    "template <class F>\nvoid on_completion(F &&)":
      arguments:
        - description: __OPTIONAL__
          name: f
          type: F &&
      description: __INLINED__
      inline:
        description:
          - Invokes `f` immediately when this future completes (value or exception). Requires `f` is noexcept.
      return: __OPTIONAL__
      signature_with_names: "template <class F>\nvoid on_completion(F && f)"
---
