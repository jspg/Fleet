#include <iostream>
#include <string>
#include <sstream>
#include "../include/StandardPlayer.h"
#include "../include/Tutorial1View.h"
#include "../include/World.h"

using namespace std;

Tutorial1View::Tutorial1View(World* world)
{
    setWorld(world);
}

void Tutorial1View::introduction()
{
	cout << "Tut 1 introduction..." << endl;
	cout << endl;
	cout << "Press enter to continue..." << endl;
	cin.ignore();
	system("CLS");
}

void Tutorial1View::showWorld()
{
	cout << "Tut 1 world description" << endl;
	cout << "====================================" << endl;
	cout << endl;
	cout << "Player" << endl;
	cout << "------------------------------------" << endl;
	cout << endl;
	cout << _world->test() << endl;
	_world->getPlayer();
//	_world->getPlayerGold();
//	int gold = _world->getPlayerGold();
	cout << "Gold: " << 7 << endl;


	cout << "Press enter to continue..." << endl;
	cin.ignore();
	system("CLS");
}

void Tutorial1View::setWorld(World* world)
{
    _world = world;
}
