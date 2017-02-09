#ifndef D_Player_H
#define D_Player_H

///////////////////////////////////////////////////////////////////////////////
//
//  Player is responsible for ...
//
///////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FAIL 0

class Player
  {
  public:
    explicit Player();
    virtual ~Player();
    int showHand(void);
    void notifyResult(bool result);
    int getWinCount(void);

    enum RSP
    {
      STONE = 1,
      SCISSORS,
      PAPER
    };

  private:
    Player(const Player&);
    Player& operator=(const Player&);

    char _name;
    int  _winCount;
  };

#endif  // D_Player_H
