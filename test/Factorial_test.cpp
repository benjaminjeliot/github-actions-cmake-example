// Copyright (c) 2024 Jim Eliot

#include "xmpl/Factorial.h"

#include <gtest/gtest.h>

TEST(Factorial, factorial_one_to_six) {
  EXPECT_EQ(xmpl::Factorial(1), 1);
  EXPECT_EQ(xmpl::Factorial(2), 2);
  EXPECT_EQ(xmpl::Factorial(3), 6);
  EXPECT_EQ(xmpl::Factorial(4), 24);
  EXPECT_EQ(xmpl::Factorial(5), 120);
  EXPECT_EQ(xmpl::Factorial(6), 720);
}
