#include <iostream>
#include <string>
#include <sstream>
#include "../include/StandardPlayer.h"
#include "../include/World.h"

using namespace std;

World::World(StandardPlayer* player)
{
}

void World::setPlayer(StandardPlayer* player)
{
	_player = player;
}