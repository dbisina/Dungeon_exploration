#include "gtest/gtest.h"
#include "../Header Files/MonsterRoom.h"

TEST(MonsterRoom, Constructor) {
  MonsterRoom monsterRoom;
  EXPECT_EQ(monsterRoom.getName(), "");
  EXPECT_EQ(monsterRoom.getDescription(), "");
}

TEST(MonsterRoom, Getters) {
  MonsterRoom monsterRoom;
  monsterRoom.setName("Test Monster Room");
  monsterRoom.setDescription("This is a test monster room.");

  EXPECT_EQ(monsterRoom.getName(), "Test Monster Room");
  EXPECT_EQ(monsterRoom.getDescription(), "This is a test monster room.");
}

TEST(MonsterRoom, Setters) {
  MonsterRoom monsterRoom;
  monsterRoom.setName("Test Monster Room");
  monsterRoom.setDescription("This is a test monster room.");

  EXPECT_EQ(monsterRoom.getName(), "Test Monster Room");
  EXPECT_EQ(monsterRoom.getDescription(), "This is a test monster room.");
}

TEST(MonsterRoom, roomOperation) {
  MonsterRoom monsterRoom;
  monsterRoom.roomOperation();

  EXPECT_EQ(monsterRoom.getName(), "Test Monster Room");
  EXPECT_EQ(monsterRoom.getDescription(), "This is a test monster room.");
}

TEST(MonsterRoom, monsterRoomDisplay) {
  MonsterRoom monsterRoom;
  monsterRoom.monsterRoomDisplay();

  EXPECT_EQ(monsterRoom.getName(), "Test Monster Room");
  EXPECT_EQ(monsterRoom.getDescription(), "This is a test monster room.");
}

TEST(MonsterRoom, monkTurn) {
  MonsterRoom monsterRoom;
  monsterRoom.monkTurn();

  EXPECT_EQ(monsterRoom.getName(), "Test Monster Room");
  EXPECT_EQ(monsterRoom.getDescription(), "This is a test monster room.");
}

TEST(MonsterRoom, entityTurn) {
  MonsterRoom monsterRoom;
  monsterRoom.entityTurn();

  EXPECT_EQ(monsterRoom.getName(), "Test Monster Room");
  EXPECT_EQ(monsterRoom.getDescription(), "This is a test monster room.");
}
