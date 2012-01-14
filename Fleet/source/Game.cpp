#include <iostream>
#include "../include/Game.h"
#include "../include/View.h"

Game::Game(View view)
{
  std::cout << "Game constructor" << std::endl;
  setView(view);
}

void Game::setView(View view)
{
  std::cout << "Game setview" << std::endl;
	_view = view;
}

void Game::play()
{
  std::cout << "Game play" << std::endl;
  _view.introduction();
}