---
layout: method
title: set_exception
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - method
  inline:
    brief:
      - Completes the future with `error` without invoking the callable.
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    void set_exception(const std::exception_ptr &):
      arguments:
        - description: __OPTIONAL__
          name: error
          type: const std::exception_ptr &
      description: __INLINED__
      inline:
        description:
          - Completes the future with `error` without invoking the callable.
      return: __OPTIONAL__
      signature_with_names: void set_exception(const std::exception_ptr & error)
---
