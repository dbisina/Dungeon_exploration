#include "gtest/gtest.h"
#include "../Header Files/NumberGenerator.h"

TEST(NumberGenerator, actionNumberGenerator) {
  NumberGenerator numberGenerator;
  int result = numberGenerator.actionNumberGenerator();
  EXPECT_GE(result, 0);
  EXPECT_LE(result, 1);
}
