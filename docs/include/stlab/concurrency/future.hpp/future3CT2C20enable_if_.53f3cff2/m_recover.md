---
layout: method
title: recover
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - method
  inline:
    brief: _multiple descriptions_
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    "template <class E, class F>\nauto recover(E &&, F &&) &&":
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
          - Returns a future that completes with the result of `f` given this future, run on `executor`. Rvalue overload; consumes `*this`.
      return: __OPTIONAL__
      signature_with_names: "template <class E, class F>\nauto recover(E && executor, F && f) &&"
    "template <class E, class F>\nauto recover(E &&, F &&) const &":
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
          - Returns a future that completes with the result of `f` given this future, run on `executor`.
      return: __OPTIONAL__
      signature_with_names: "template <class E, class F>\nauto recover(E && executor, F && f) const &"
    "template <class F>\nauto recover(F &&) &&":
      arguments:
        - description: __OPTIONAL__
          name: f
          type: F &&
      description: __INLINED__
      inline:
        description:
          - Returns a future that completes with the result of `f` given this future (possibly in error state); default executor. Rvalue overload; consumes `*this`.
      return: __OPTIONAL__
      signature_with_names: "template <class F>\nauto recover(F && f) &&"
    "template <class F>\nauto recover(F &&) const &":
      arguments:
        - description: __OPTIONAL__
          name: f
          type: F &&
      description: __INLINED__
      inline:
        description:
          - Returns a future that completes with the result of `f` given this future (possibly in error state); default executor.
      return: __OPTIONAL__
      signature_with_names: "template <class F>\nauto recover(F && f) const &"
---
