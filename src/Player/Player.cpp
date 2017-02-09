#include "Player.h"

Player::Player()
{
    _winCount = 0;
}

Player::~Player()
{
}

int Player::showHand(void)
{
  return STONE;
}

void Player::notifyResult(bool result)
{
  if(result == TRUE)  _winCount++;
}


int Player::getWinCount(void)
{
  return _winCount;
}
