---
layout: method
title: exception
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - method
  inline:
    brief:
      - Returns the stored exception, or a null `exception_ptr` if the future completed with a value.
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    auto exception() const -> std::exception_ptr &:
      description: __INLINED__
      inline:
        description:
          - Returns the stored exception, or a null `exception_ptr` if the future completed with a value.
        pre: "`is_ready()`"
      return: __OPTIONAL__
      signature_with_names: auto exception() const -> std::exception_ptr &
---
