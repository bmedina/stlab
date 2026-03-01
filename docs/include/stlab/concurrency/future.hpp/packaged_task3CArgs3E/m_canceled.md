---
layout: method
title: canceled
hyde:
  owner: sean-parent
  brief: Returns true if there are no longer any futures attached to the task.
  tags:
    - method
  inline:
    brief:
      - True if the associated future was released.
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    auto canceled() const -> bool:
      description: __INLINED__
      inline:
        description:
          - True if the associated future was released.
      return: __OPTIONAL__
      signature_with_names: auto canceled() const -> bool
---
