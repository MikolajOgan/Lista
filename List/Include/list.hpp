#include <iostream>
#include <cstdint>

template<typename type>

class List
{
public:
  struct element
  {
    type value;
    element *next;

    element()
    {
        next = 0;
    }
  };

  element *first;

  void pushBack(type value)
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

  void print()
  {
    element *tmp = first;

    while(tmp)
    {
      std::cout << "value:" << tmp -> value;
      tmp = tmp -> next;
    }
  }

  int size()
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

  List()
  {
    first = 0;
  }
};
