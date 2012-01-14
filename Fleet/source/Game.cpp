#include <iostream>
#include "../include/Game.h"
#include "../include/Level.h"
#include "../include/LevelFactory.h"
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
	LevelFactory levelFactory;
	Level level = levelFactory.getLevel(c);
}