#ifndef GAME_H
#define GAME_H

#include "../include/View.h"

class Game {
public:
	Game(View *view);
	void play();

private:
	void setView(View *view);
	View *_view;
};

#endif

