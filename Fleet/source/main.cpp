#include <iostream>
#include "../include/Ship.h"
#include "../include/View.h"
#include "../include/Game.h"

int main()
{
  View *view = new View;
  Game game(view);
  game.play();

  std::cin.ignore();
  return 0;
}
