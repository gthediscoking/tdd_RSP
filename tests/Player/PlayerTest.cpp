#include "Player.h"

//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"

#define NUM_OF_WIN 5

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

TEST(Player, InitWinCount)
{
  // クラスインスタンス生成直後、winCountが0に初期化されているか
  int count = player->getWinCount();
  CHECK_EQUAL(0, count);
  // FAIL("Start here");
}

TEST(Player, CountUpAndDownWinCount)
{
  int count;

  // 勝ちを重ねると、winCountがカウントアップする
  for(int i=0;i < NUM_OF_WIN;i++){
    player->notifyResult(TRUE);
  }
  // count = player->getWinCount();
  // CHECK_EQUAL(expected, count);

  // 負けを重ねても、winCountは変化しない
  for(int i=0;i < NUM_OF_WIN;i++){
    player->notifyResult(FAIL);
  }

  // winCountが買った回数だけ増えているか確認
  count = player->getWinCount();
  CHECK_EQUAL(NUM_OF_WIN, count);
}
