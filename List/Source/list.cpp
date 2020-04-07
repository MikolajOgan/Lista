#ifndef LIST_CPP
#define LIST_CPP
#include "list.hpp"

template<typename type>
List<type>::element::element(type value)
:value(value),
next(0)
{}

template<typename type>
List<type>::List()
:first(0)
{}

  template<typename type>
  void List<type>::pushBack(type value)
  {
    element *new_element = new element;

    new_element -> value = value;

    if(first == 0)
    {
      first = new_element;
    }
    else
    {
      element *tmp = first;

      while (tmp -> next) {
          tmp = tmp -> next;
      }

      tmp -> next = new_element;
      new_element -> next = 0;
      }
  }

template<typename type>
void List<type>::print()
  {
    element *tmp = first;

    while(tmp)
    {
      std::cout << "value:" << tmp -> value;
      tmp = tmp -> next;
    }
  }

  template<typename type>
  uint List<type>::size()
  {
    element *tmp = first;
    int size = 0;

    while(tmp)
    {
      ++size;
      tmp = tmp -> next;
    }
    return size;
  }

#endif
