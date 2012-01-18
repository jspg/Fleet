#include <iostream>
#include <string>
#include <sstream>
#include "../include/LevelFactory.h"
#include "../include/Tutorial1View.h"
#include "../include/World.h"

using namespace std;

LevelFactory::LevelFactory()
{
}

Level* LevelFactory::getLevel(char c)
{
	switch (c) {
		case '1':
			{
				World* world1 = new World;
				Tutorial1View* view1 = new Tutorial1View;
				return new Tutorial1(world1, view1);
			}
		case '2':
			{
				return new Tutorial2();
			}
		default:
			throw new exception("Invalid parameter in LevelFactory::getLevel. Param = " + c);
	}
}