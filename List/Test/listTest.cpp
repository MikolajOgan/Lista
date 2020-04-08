#include <gtest/gtest.h>
#include "list.hpp"
#include <iostream>

using namespace ::testing;

TEST(ListTest, SizeTest)
{
  List<int> list1;
  list1.pushBack(1);
  list1.pushBack(2);
  list1.pushBack(3);
  list1.print();
  ASSERT_EQ(list1.size(), 3);
}
