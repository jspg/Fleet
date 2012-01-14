#include <iostream>
#include <string>
#include <sstream>
#include "../include/View.h"

using namespace std;

View::View()
{
}

void View::introduction()
{
  cout << "Welcome!" << endl;
  cout << "============================" << endl;
  cout << "info..." << endl;
  cout << endl;
  cout << "press enter" << endl;

  cin.ignore();
}

char View::mainMenu()
{
	system("CLS");

	cout << "Main menu" << endl;
	cout << "============================" << endl;
	cout << "1:  Tutorial level 1" << endl;
	cout << "2:  Tutorial level 2" << endl;
	cout << endl;

	string input = "";

	char c  = {0};

	while (true) {
		getline(cin, input);

		if (input.length() == 1) {
			c = input[0];
			break;
		}

		cout << "Invalid character, please try again" << endl;
	}

	system("CLS");

	return c;
}