#include "gtest/gtest.h"
#include "../Header Files/Room.h"

TEST(Room, Constructor) {
  Room room;
  EXPECT_EQ(room.getName(), "");
  EXPECT_EQ(room.getDescription(), "");
}

TEST(Room, Getters) {
  Room room;
  room.setName("Test Room");
  room.setDescription("This is a test room.");

  EXPECT_EQ(room.getName(), "Test Room");
  EXPECT_EQ(room.getDescription(), "This is a test room.");
}

TEST(Room, Setters) {
  Room room;
  room.setName("Test Room");
  room.setDescription("This is a test room.");

  EXPECT_EQ(room.getName(), "Test Room");
  EXPECT_EQ(room.getDescription(), "This is a test room.");
}

TEST(Room, roomOperation) {
  Room room;
  room.roomOperation();

  EXPECT_EQ(room.getName(), "Test Room");
  EXPECT_EQ(room.getDescription(), "This is a test room.");
}

TEST(Room, Display) {
  Room room;
  room.Display();

  EXPECT_EQ(room.getName(), "Test Room");
  EXPECT_EQ(room.getDescription(), "This is a test room.");
}
