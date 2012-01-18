#include <iostream>
#include <string>
#include <sstream>
#include "../include/Level.h"
#include "../include/LevelView.h"

using namespace std;

Level::Level()
{
}

void Level::setView(LevelView* view)
{
	_view = view;
}