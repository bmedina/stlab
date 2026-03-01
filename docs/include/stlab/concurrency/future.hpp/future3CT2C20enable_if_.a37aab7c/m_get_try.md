---
layout: method
title: get_try
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - method
  inline:
    brief: _multiple descriptions_
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    auto get_try() &&:
      description: __INLINED__
      inline:
        description:
          - Same as `get_try()` but may move the value when this is the only reference.
      return: __OPTIONAL__
      signature_with_names: auto get_try() &&
    auto get_try() const &:
      description: __INLINED__
      inline:
        description:
          - Returns the value if ready, or `std::nullopt` / false (for void) if not; rethrows if completed with exception.
      return: __OPTIONAL__
      signature_with_names: auto get_try() const &
---
