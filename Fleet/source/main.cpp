#include <iostream>
#include "../include/Ship.h"
#include "../include/View.h"
#include "../include/Game.h"

using namespace std;

int main()
{
  View *view = new View;
  Game game(view);
  game.play();

  std::cout << "Press enter to quit." << endl;
  std::cin.ignore();
  return 0;
}