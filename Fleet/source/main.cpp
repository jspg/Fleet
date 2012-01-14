#include <iostream>
#include "../include/Ship.h"
#include "../include/View.h"
#include "../include/Game.h"

int main()
{
  std::cout << "A dummy main" << std::endl;

  View view;
  Game game(view);
  game.play();

  std::cin.ignore();
  return 0;
}
