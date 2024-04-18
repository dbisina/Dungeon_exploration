#include "../Header Files/EmptyRoom.h"
#include "gtest/gtest.h"

TEST(EmptyRoomTest, Display) {
  testing::internal::CaptureStdout();
  EmptyRoom room;
  room.Display();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_NE(output.find("Empty Room"), std::string::npos);
}

TEST(EmptyRoomTest, RoomOperation) {
  testing::internal::CaptureStdout();
  EmptyRoom room;
  room.roomOperation();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_NE(output.find("Pray in this room to restore your Health Points"), std::string::npos);
  EXPECT_NE(output.find("[1] Pray"), std::string::npos);
  EXPECT_NE(output.find("[2] Avoid Praying"), std::string::npos);
}

TEST(EmptyRoomTest, Details) {
  testing::internal::CaptureStdout();
  EmptyRoom room;
  room.Details();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_NE(output.find("Player Details: Name:"), std::string::npos);
  EXPECT_NE(output.find("Health Points:"), std::string::npos);
  EXPECT_NE(output.find("Maximum Health Points"), std::string::npos);
  EXPECT_NE(output.find("Attack Points"), std::string::npos);
}
