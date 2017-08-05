#ifndef D_Player_H
#define D_Player_H

///////////////////////////////////////////////////////////////////////////////
//
//  Player is responsible for ...
//
///////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FAIL 0
#define STR_LEN_MAX 256

enum RSP
{
  ROCK = 1,
  SCISSORS,
  PAPER
};

class Player
  {
  public:
    explicit Player();
    virtual ~Player();
    Player(const char* p);
    int  showHand(void);
    void notifyResult(bool result);
    int  getWinCount(void);
    const char* getName(void);

  private:
    Player(const Player&);
    Player& operator=(const Player&);

    const char* _pName;
    int _winCount;
  };

#endif  // D_Player_H
