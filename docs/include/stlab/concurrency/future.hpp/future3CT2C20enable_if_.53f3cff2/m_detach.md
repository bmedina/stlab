---
layout: method
title: detach
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - method
  inline:
    brief: _multiple descriptions_
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    "template <class F>\nvoid detach(F &&) &&":
      arguments:
        - description: __OPTIONAL__
          name: f
          type: F &&
      description: __INLINED__
      inline:
        description:
          - When this future completes (value or exception), invokes `f` with it and does not propagate further.
      return: __OPTIONAL__
      signature_with_names: "template <class F>\nvoid detach(F && f) &&"
    void detach() const:
      description: __INLINED__
      inline:
        description:
          - Drops this future without requiring a value; the promise may see `broken_promise`.
      return: __OPTIONAL__
      signature_with_names: void detach() const
---
