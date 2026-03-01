---
layout: method
title: then
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - method
  inline:
    brief: _multiple descriptions_
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    "template <class E, class F>\nauto then(E &&, F &&) &&":
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
          - Returns a future that completes with the result of `f` on `executor` applied to this future's value.
      return: __OPTIONAL__
      signature_with_names: "template <class E, class F>\nauto then(E && executor, F && f) &&"
    "template <class F>\nauto then(F &&) &&":
      arguments:
        - description: __OPTIONAL__
          name: f
          type: F &&
      description: __INLINED__
      inline:
        description:
          - Returns a future that completes with the result of `f` applied to this future's value (rvalue only).
      return: __OPTIONAL__
      signature_with_names: "template <class F>\nauto then(F && f) &&"
---
