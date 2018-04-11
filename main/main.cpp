#include "Player.h"

void printHand(int hand);

void printHand(int hand) {
  /* code */
  if(hand == ROCK){
    printf("出した手はグーです。\n");
  }else if(hand == SCISSORS){
    printf("出した手はチョキです。\n");
  }else if(hand == PAPER){
    printf("出した手はパーです。\n");
  }else{
    printf("無効な手です。\n");
  }
}

// int main(int argc, char const *argv[]) {
int main(void) {
  /* code */
  int _hand1, _hand2;

  Player* p1 = new Player();
  Player* p2 = new Player();

  _hand1 = p1->showHand();
  _hand2 = p2->showHand();

  printHand(_hand1);
  printHand(_hand2);

  delete p1, p2;

  return 0;
}
