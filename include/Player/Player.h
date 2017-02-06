#ifndef D_Player_H
#define D_Player_H

///////////////////////////////////////////////////////////////////////////////
//
//  Player is responsible for ...
//
///////////////////////////////////////////////////////////////////////////////

class Player
  {
  public:
    explicit Player();
    virtual ~Player();

  private:

    Player(const Player&);
    Player& operator=(const Player&);

  };

#endif  // D_Player_H
