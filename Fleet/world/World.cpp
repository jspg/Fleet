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

int World::getPlayerGold()
{
	return _player->getGold();
}

int World::test()
{
	return 6;
}

StandardPlayer* World::getPlayer()
{
	return _player;
}