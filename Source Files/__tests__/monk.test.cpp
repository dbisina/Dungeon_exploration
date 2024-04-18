#include "gtest/gtest.h"
#include "../Header Files/Monk.h"

TEST(Monk, Constructor) {
  Monk monk;
  EXPECT_EQ(monk.getName(), "");
  EXPECT_EQ(monk.getDescription(), "");
  EXPECT_EQ(monk.getHealthPoints(), 0);
  EXPECT_EQ(monk.getMaxHealthPoints(), 0);
  EXPECT_EQ(monk.getAttackPoints(), 0);
}

TEST(Monk, Getters) {
  Monk monk;
  monk.setName("Test Monk");
  monk.setDescription("This is a test monk.");
  monk.setHealthPoints(100);
  monk.setMaxHealthPoints(100);
  monk.setAttackPoints(10);

  EXPECT_EQ(monk.getName(), "Test Monk");
  EXPECT_EQ(monk.getDescription(), "This is a test monk.");
  EXPECT_EQ(monk.getHealthPoints(), 100);
  EXPECT_EQ(monk.getMaxHealthPoints(), 100);
  EXPECT_EQ(monk.getAttackPoints(), 10);
}

TEST(Monk, Setters) {
  Monk monk;
  monk.setName("Test Monk");
  monk.setDescription("This is a test monk.");
  monk.setHealthPoints(100);
  monk.setMaxHealthPoints(100);
  monk.setAttackPoints(10);

  EXPECT_EQ(monk.getName(), "Test Monk");
  EXPECT_EQ(monk.getDescription(), "This is a test monk.");
  EXPECT_EQ(monk.getHealthPoints(), 100);
  EXPECT_EQ(monk.getMaxHealthPoints(), 100);
  EXPECT_EQ(monk.getAttackPoints(), 10);
}
