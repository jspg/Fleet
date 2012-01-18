#ifndef LEVEL_H
#define LEVEL_H

#include "../include/LevelView.h"

class Level {
public:
	Level();
	virtual void play() = 0;

protected:
	void setView(LevelView* view);

protected:
	LevelView* _view;
};

#endif