#pragma once
#include <iostream>
#include <cstdint>
#include <cstdlib>

template<typename type>

class List
{
  public:
    struct element
    {
      type value;
      element *next;

      element(type value);
    };
    element *first;
    List();
    void print();
    void pushBack(type value);
    uint size();
};
