#include <gtest/gtest.h>
#include "factorial.h"

TEST(FactorialTest, ShortTimeExecution) {
  EXPECT_EQ(factorial(0), 1);
  EXPECT_EQ(factorial(1), 1);
  EXPECT_EQ(factorial(5), 120);
  EXPECT_EQ(factorial(10), 3628800);
}

TEST(FactorialTest, LongTimeExecution) {
  EXPECT_EQ(factorial(15), 1307674368000);
  EXPECT_EQ(factorial(20), 2432902008176640000);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}