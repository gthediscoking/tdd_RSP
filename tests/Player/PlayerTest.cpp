#include "Player.h"

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"

#define ZERO 0
#define NUM_OF_WIN 5
#define NUM_OF_LOSE 10
#define NAME "HidekiKONDO"

TEST_GROUP(Player)
{
  Player* player;

  void setup()
  {
    player = new Player(NAME);
  }
  void teardown()
  {
    delete player;
  }
};

TEST(Player, InitWinCount)
{
  // クラスインスタンス生成直後、winCountが0に初期化されているか
  int count = player->getWinCount();
  CHECK_EQUAL(ZERO, count);
  // FAIL("Start here");
}

TEST(Player, CountUpAndDownWinCount)
{
  int count;

  // 勝ちを重ねると、winCountがカウントアップする
  for(int i=0; i < NUM_OF_WIN; i++)
  {
    player->notifyResult(TRUE);
  }
  // count = player->getWinCount();
  // CHECK_EQUAL(expected, count);

  // 負けを重ねても、winCountは変化しない
  for(int i=0; i < NUM_OF_LOSE; i++)
  {
    player->notifyResult(FAIL);
  }

  // winCountが買った回数だけ増えているか確認
  count = player->getWinCount();
  CHECK_EQUAL(NUM_OF_WIN, count);
}

TEST(Player, StoneAlwaysShowed)
{
  // じゃんけんの手は必ずグーを出す
  int hand = player->showHand();
  CHECK_EQUAL(ROCK, hand);
}

TEST(Player, getName)
{
  const char* pN = player->getName();
  STRCMP_EQUAL(NAME, pN);
}
