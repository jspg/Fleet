#include <iostream>
#include "../include/Game.h"
#include "../include/View.h"

using namespace std;

Game::Game(View *view)
{
	setView(view);
}

void Game::setView(View *view)
{
	_view = view;
}

void Game::play()
{
	_view->introduction();
	char c = _view->mainMenu();
}