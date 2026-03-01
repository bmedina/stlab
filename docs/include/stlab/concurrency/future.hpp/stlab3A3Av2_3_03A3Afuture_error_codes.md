---
layout: enumeration
title: future_error_codes
hyde:
  owner: __MISSING__
  brief: __MISSING__
  tags:
    - enumeration
  inline:
    description:
      - Error codes for future_error.
  defined_in_file: stlab/concurrency/future.hpp
  namespace:
    - stlab
    - v2_3_0
  values:
    - description: __INLINED__
      inline:
        description:
          - Promise was destroyed without setting a value or exception.
      name: broken_promise
    - description: __INLINED__
      inline:
        description:
          - Operation required a valid shared state.
      name: no_state
---
