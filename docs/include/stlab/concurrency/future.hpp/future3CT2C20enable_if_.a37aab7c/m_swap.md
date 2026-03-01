---
layout: method
title: swap
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - method
  inline:
    brief:
      - Exchanges the shared state with `x`.
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    void swap(future<T, typename enable_if<!smart_is_copy_constructible_v<typename void_to_monostate<T>::type>, void>::type> &):
      arguments:
        - description: __OPTIONAL__
          name: x
          type: future<T, typename enable_if<!smart_is_copy_constructible_v<typename void_to_monostate<T>::type>, void>::type> &
      description: __INLINED__
      inline:
        description:
          - Exchanges the shared state with `x`.
      return: __OPTIONAL__
      signature_with_names: void swap(future<T, typename enable_if<!smart_is_copy_constructible_v<typename void_to_monostate<T>::type>, void>::type> & x)
---
