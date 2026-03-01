---
layout: method
title: get_ready
hyde:
  owner: sean-parent
  brief: __INLINED__
  tags:
    - method
  inline:
    brief: _multiple descriptions_
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    auto get_ready() &&:
      description: __INLINED__
      inline:
        description:
          - Same as `get_ready()` but may move the value when this is the only reference.
      return: __OPTIONAL__
      signature_with_names: auto get_ready() &&
    auto get_ready() const &:
      description: __INLINED__
      inline:
        description:
          - Returns the value.
        pre: "`is_ready()`. Rethrows the stored exception if the future failed."
      return: __OPTIONAL__
      signature_with_names: auto get_ready() const &
---
