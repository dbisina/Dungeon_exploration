#include "GameCLI.h"
#include "gtest/gtest.h"

TEST(GameCLITest, Display) {
  testing::internal::CaptureStdout();
  Display();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_NE(output.find("Dungeons & Dragons"), std::string::npos);
}

TEST(GameCLITest, Start) {
  testing::internal::CaptureStdout();
  Start();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_NE(output.find("Enter Name:"), std::string::npos);
  EXPECT_NE(output.find("Enter Description:"), std::string::npos);
}

TEST(GameCLITest, Instructions) {
  testing::internal::CaptureStdout();
  Instructions();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_NE(output.find("Instructions"), std::string::npos);
}

TEST(GameCLITest, ExitGame) {
  testing::internal::CaptureStdout();
  exitGame();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "");
}

TEST(GameCLITest, Main) {
  testing::internal::CaptureStdout();
  main();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_NE(output.find("Dungeons & Dragons"), std::string::npos);
  EXPECT_NE(output.find("[1] Start Game"), std::string::npos);
  EXPECT_NE(output.find("[2] Instructions"), std::string::npos);
  EXPECT_NE(output.find("[3] Exit Game"), std::string::npos);
}
