#include <iostream>
#include <string>
#include <sstream>
#include "../include/Tutorial1.h"
#include "../include/Tutorial1View.h"
#include "../include/World.h"

using namespace std;

Tutorial1::Tutorial1(World* world, Tutorial1View* view)
{
	setView(view);
}

void Tutorial1::setView(Tutorial1View* view)
{
	_view = view;
}

void Tutorial1::play()
{
	_view->introduction();
}