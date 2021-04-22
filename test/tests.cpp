// Copyright 2020 GHA Test Team
#include "fun.h"

#include <gtest/gtest.h>

TEST(MyFunTest, test1) {
  int result=add(2,2);
  EXPECT_EQ(4,result);
}
