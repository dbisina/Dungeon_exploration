#include "../Header Files/Goblin.h"
#include "gtest/gtest.h"

TEST(GoblinTest, GetName) {
  Goblin goblin;
  EXPECT_EQ(goblin.getName(), "");
}

TEST(GoblinTest, GetHealthPoints) {
  Goblin goblin;
  EXPECT_EQ(goblin.getHealthPoints(), 0);
}

TEST(GoblinTest, GetMaxHealthPoints) {
  Goblin goblin;
  EXPECT_EQ(goblin.getMaxHealthPoints(), 0);
}

TEST(GoblinTest, GetAttackPoints) {
  Goblin goblin;
  EXPECT_EQ(goblin.getAttackPoints(), 0);
}

TEST(GoblinTest, SetHealthPoints) {
  Goblin goblin;
  goblin.setHealthPoints(10);
  EXPECT_EQ(goblin.getHealthPoints(), 10);
}

TEST(GoblinTest, SetMaxHealthPoints) {
  Goblin goblin;
  goblin.setMaxHealthPoints(10);
  EXPECT_EQ(goblin.getMaxHealthPoints(), 10);
}
