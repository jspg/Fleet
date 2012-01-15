#ifndef TUTORIAL1_H
#define TUTORIAL1_H

#include "../include/Level.h"
#include "../include/Tutorial1View.h"

class Tutorial1 : public Level {
public:
	Tutorial1(Tutorial1View view);
	void play();

private:

};

#endif