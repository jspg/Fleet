#include <iostream>
#include <string>
#include <sstream>
#include "../include/LevelFactory.h"
#include "../include/Tutorial1View.h"

using namespace std;

LevelFactory::LevelFactory()
{
}

Level* LevelFactory::getLevel(char c)
{
	switch (c) {
		case '1':
			{
				Tutorial1View v;
				return new Tutorial1(v);
			}
		case '2':
			{
				return new Tutorial2();
			}
		default:
			throw new exception("Invalid parameter in LevelFactory::getLevel. Param = " + c);
	}
}