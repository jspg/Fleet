#ifndef TUTORIAL1_H
#define TUTORIAL1_H

#include "../include/Level.h"
#include "../include/StandardPlayer.h"
#include "../include/Tutorial1View.h"
#include "../include/World.h"

class Tutorial1 : public Level {
public:
	Tutorial1(World* world, Tutorial1View* view);
	void play();

private:
	void setView(Tutorial1View* view);
	void setWorld(World* world);
	Tutorial1View* _view;
	World* _world;
};

#endif