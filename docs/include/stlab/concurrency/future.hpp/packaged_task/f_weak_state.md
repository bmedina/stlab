---
layout: function
title: weak_state
hyde:
  owner: __MISSING__
  brief: __MISSING__
  tags:
    - function
  defined_in_file: stlab/concurrency/future.hpp
  overloads:
    "template <class... Brgs>\nauto weak_state(const packaged_task<Brgs...> &) -> std::weak_ptr<detail::shared_task<Brgs...>>":
      arguments:
        - description: __OPTIONAL__
          name: p
          type: const packaged_task<Brgs...> &
      description: __MISSING__
      return: __OPTIONAL__
      signature_with_names: "template <class... Brgs>\nauto weak_state(const packaged_task<Brgs...> & p) -> std::weak_ptr<detail::shared_task<Brgs...>>"
  namespace:
    - stlab
    - v2_3_0
---
