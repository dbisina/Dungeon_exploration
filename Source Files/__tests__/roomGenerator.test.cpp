#include "gtest/gtest.h"
#include "../Header Files/RoomGenerator.h"
#include "../Header Files/TreasureRoom.h"
#include "../Header Files/MonsterRoom.h"

TEST(RoomGenerator, generateRoom) {
  RoomGenerator roomGenerator;

  // Test generating a MonsterRoom
  Room* room1 = roomGenerator.generateRoom(1);
  EXPECT_EQ(dynamic_cast<MonsterRoom*>(room1), room1);

  // Test generating an EmptyRoom
  Room* room2 = roomGenerator.generateRoom(2);
  EXPECT_EQ(dynamic_cast<EmptyRoom*>(room2), room2);

  // Test generating another MonsterRoom
  Room* room3 = roomGenerator.generateRoom(3);
  EXPECT_EQ(dynamic_cast<MonsterRoom*>(room3), room3);

  // Test generating a TreasureRoom
  Room* room4 = roomGenerator.generateRoom(4);
  EXPECT_EQ(dynamic_cast<TreasureRoom*>(room4), room4);
}
