#ifndef TUTORIAL1VIEW_H
#define TUTORIAL1VIEW_H

#include "../include/LevelView.h"
#include "../include/StandardPlayer.h"
#include "../include/World.h"

class Tutorial1View {
public:
	Tutorial1View(World* world);
	void introduction();
	void showWorld();

private:
	void setWorld(World* world);
	World* _world;
};

#endif