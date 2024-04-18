#include "../Header Files/EntityGenerator.h"
#include "gtest/gtest.h"

TEST(EntityGeneratorTest, CreateEntity) {
  EntityGenerator entityGenerator;

  // Test creating a Goblin
  Entity* entity = entityGenerator.createEntity(1);
  EXPECT_EQ(entity->getName(), "Goblin");
  EXPECT_EQ(entity->getHealthPoints(), 10);
  EXPECT_EQ(entity->getMaximumHealthPoints(), 10);
  EXPECT_EQ(entity->getAttackPoints(), 5);

  // Test creating a Monk
  entity = entityGenerator.createEntity(2);
  EXPECT_EQ(entity->getName(), "Monk");
  EXPECT_EQ(entity->getHealthPoints(), 15);
  EXPECT_EQ(entity->getMaximumHealthPoints(), 15);
  EXPECT_EQ(entity->getAttackPoints(), 7);

  // Test creating an invalid entity
  entity = entityGenerator.createEntity(3);
  EXPECT_EQ(entity, nullptr);
}
