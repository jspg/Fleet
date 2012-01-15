#include <iostream>
#include <string>
#include <sstream>
#include "../include/Tutorial1.h"
#include "../include/Tutorial1View.h"

using namespace std;

Tutorial1::Tutorial1(Tutorial1View view)
{
	setView(view);
}

void Tutorial1::play()
{
	cout << "Tut 1 play" << endl;
}