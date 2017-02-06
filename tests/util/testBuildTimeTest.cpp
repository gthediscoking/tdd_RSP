#include "CppUTest/TestHarness.h"
#include "testBuildTime.h"

TEST_GROUP(testBuildTime)
{
  testBuildTime* projectBuildTime;

  void setup()
  {
    projectBuildTime = new testBuildTime();
  }
  void teardown()
  {
    delete projectBuildTime;
  }
};

TEST(testBuildTime, Create)
{
  CHECK(0 != projectBuildTime->GetDateTime());
}

