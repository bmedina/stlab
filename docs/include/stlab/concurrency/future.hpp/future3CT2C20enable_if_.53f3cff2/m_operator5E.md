---
layout: method
title: operator^
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - method
  inline:
    brief: _multiple descriptions_
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    "template <class F>\nauto operator^(F &&) &&":
      arguments:
        - description: __OPTIONAL__
          name: f
          type: F &&
      description: __INLINED__
      inline:
        description:
          - "Pipe operator: same as `recover(f)`. Rvalue overload; consumes `*this`."
      return: __OPTIONAL__
      signature_with_names: "template <class F>\nauto operator^(F && f) &&"
    "template <class F>\nauto operator^(F &&) const &":
      arguments:
        - description: __OPTIONAL__
          name: f
          type: F &&
      description: __INLINED__
      inline:
        description:
          - "Pipe operator: same as `recover(f)`."
      return: __OPTIONAL__
      signature_with_names: "template <class F>\nauto operator^(F && f) const &"
    "template <class F>\nauto operator^(executor_task_pair<F>) &&":
      arguments:
        - description: __OPTIONAL__
          name: etp
          type: executor_task_pair<F>
      description: __INLINED__
      inline:
        description:
          - "Pipe operator: same as `recover(etp.executor(), etp.task())`. Rvalue overload; consumes `*this`."
      return: __OPTIONAL__
      signature_with_names: "template <class F>\nauto operator^(executor_task_pair<F> etp) &&"
    "template <class F>\nauto operator^(executor_task_pair<F>) const &":
      arguments:
        - description: __OPTIONAL__
          name: etp
          type: executor_task_pair<F>
      description: __INLINED__
      inline:
        description:
          - "Pipe operator: same as `recover(etp.executor(), etp.task())`."
      return: __OPTIONAL__
      signature_with_names: "template <class F>\nauto operator^(executor_task_pair<F> etp) const &"
---
