#ifndef WORLD_H
#define WORLD_H

#include "../include/StandardPlayer.h"

class World {
public:
	World(StandardPlayer* player);
	int getPlayerGold();
	int test();
	StandardPlayer* getPlayer();

private:
	void setPlayer(StandardPlayer* player);
	StandardPlayer* _player;
};

#endif