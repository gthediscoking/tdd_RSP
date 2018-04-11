#include "Player.h"
//#include <iostream>

// コンストラクタ
Player::Player():_winCount(0)
{
    _pName = "No Name";
    // _winCount = 0;
    // std::cout << "プレイヤー「" << *_pName << "」が生成されました。" << std::endl;
    printf("プレイヤー「%c」が生成されました。¥n", *_pName);
}

// 引数ありコンストラクタ
Player::Player(const char* p)
{
  _pName = p;
  _winCount = 0;
}

Player::~Player()
{
}

int Player::showHand(void)
{
  return ROCK;
}

void Player::notifyResult(bool result)
{
  if(result == TRUE)  _winCount++;
}

int Player::getWinCount(void)
{
  return _winCount;
}

const char* Player::getName(void)
{
  return _pName;
}
