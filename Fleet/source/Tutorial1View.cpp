#include <iostream>
#include <string>
#include <sstream>
#include "../include/Tutorial1View.h"
#include "../include/World.h"

using namespace std;

Tutorial1View::Tutorial1View(World* world)
{

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
	cout << "Press enter to continue..." << endl;
	cin.ignore();
	system("CLS");
}