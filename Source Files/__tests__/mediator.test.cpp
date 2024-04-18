#include "../Header Files/Mediator.h"
#include "gtest/gtest.h"

TEST(MediatorTest, EntityAttack) {
  Mediator mediator;
  Entity entity;
  entity.setHealthPoints(10);
  entity.setAttackPoints(5);

  mediator.EntityAttack(&entity);

  EXPECT_EQ(Monk::instance().getHealthPoints(), 5);
}

TEST(MediatorTest, EntityDefend) {
  Mediator mediator;
  Entity entity;
  entity.setHealthPoints(10);

  mediator.EntityDefend(&entity);

  EXPECT_EQ(entity.getHealthPoints(), 11);
}

TEST(MediatorTest, MonkDefend) {
  Mediator mediator;

  mediator.MonkDefend();

  EXPECT_EQ(Monk::instance().getHealthPoints(), 16);
}

TEST(MediatorTest, Pray) {
  Mediator mediator;
  Monk::instance().setHealthPoints(10);

  mediator.Pray();

  EXPECT_EQ(Monk::instance().getHealthPoints(), 15);
}

TEST(MediatorTest, MonkAttack) {
  Mediator mediator;
  Entity entity;
  entity.setHealthPoints(10);

  mediator.MonkAttack(&entity);

  EXPECT_EQ(entity.getHealthPoints(), 5);
}
