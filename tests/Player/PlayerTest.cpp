#include "Player.h"

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"

TEST_GROUP(Player)
{
  Player* player;

  void setup()
  {
    player = new Player();
  }
  void teardown()
  {
    delete player;
  }
};

TEST(Player, Create)
{
  FAIL("Start here");
}

