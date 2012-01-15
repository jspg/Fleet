#ifndef LEVELFACTORY_H
#define LEVELFACTORY_H

#include "../include/Level.h"
#include "../include/Tutorial1.h"
#include "../include/Tutorial2.h"

class LevelFactory {
public:
	LevelFactory();
	Level* getLevel(char c);

private:

};

#endif