#include "../Header Files/Entity.h"
#include "gtest/gtest.h"

TEST(EntityTest, GetHealthPoints) {
  Entity entity;
  EXPECT_EQ(entity.getHealthPoints(), 0);
}

TEST(EntityTest, GetMaxHealthPoints) {
  Entity entity;
  EXPECT_EQ(entity.getMaximumHealthPoints(), 0);
}

TEST(EntityTest, GetAttackPoints) {
  Entity entity;
  EXPECT_EQ(entity.getAttackPoints(), 0);
}

TEST(EntityTest, SetHealthPoints) {
  Entity entity;
  entity.setHealthPoints(10);
  EXPECT_EQ(entity.getHealthPoints(), 10);
}

TEST(EntityTest, SetMaxHealthPoints) {
  Entity entity;
  entity.setMaximumHealthPoints(10);
  EXPECT_EQ(entity.getMaxHealthPoints(), 10);
}

TEST(EntityTest, GetName) {
  Entity entity;
  EXPECT_EQ(entity.getName(), "");
}
