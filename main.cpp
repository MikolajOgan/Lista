#include <iostream>
#include "list.hpp"

int main()
{
  List<int> list1;
  list1.pushBack(1);
  list1.pushBack(2);
  list1.pushBack(3);
  list1.print();
}
