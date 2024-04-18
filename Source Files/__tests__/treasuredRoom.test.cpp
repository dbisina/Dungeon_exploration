#include "gtest/gtest.h"
#include "../Header Files/TreasureRoom.h"

TEST(TreasureRoom, Constructor) {
  TreasureRoom treasureRoom;
  EXPECT_EQ(treasureRoom.getName(), "");
  EXPECT_EQ(treasureRoom.getDescription(), "");
}

TEST(TreasureRoom, Getters) {
  TreasureRoom treasureRoom;
  treasureRoom.setName("Test Treasure Room");
  treasureRoom.setDescription("This is a test treasure room.");

  EXPECT_EQ(treasureRoom.getName(), "Test Treasure Room");
  EXPECT_EQ(treasureRoom.getDescription(), "This is a test treasure room.");
}

TEST(TreasureRoom, Setters) {
  TreasureRoom treasureRoom;
  treasureRoom.setName("Test Treasure Room");
  treasureRoom.setDescription("This is a test treasure room.");

  EXPECT_EQ(treasureRoom.getName(), "Test Treasure Room");
  EXPECT_EQ(treasureRoom.getDescription(), "This is a test treasure room.");
}

TEST(TreasureRoom, roomOperation) {
  TreasureRoom treasureRoom;
  treasureRoom.roomOperation();

  EXPECT_EQ(treasureRoom.getName(), "Test Treasure Room");
  EXPECT_EQ(treasureRoom.getDescription(), "This is a test treasure room.");
}

TEST(TreasureRoom, Display) {
  TreasureRoom treasureRoom;
  treasureRoom.Display();

  EXPECT_EQ(treasureRoom.getName(), "Test Treasure Room");
  EXPECT_EQ(treasureRoom.getDescription(), "This is a test treasure room.");
}
