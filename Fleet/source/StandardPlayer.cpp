#include <iostream>

#include "../include/StandardPlayer.h"

using namespace std;

StandardPlayer::StandardPlayer(int gold)
{
	setGold(gold);
}

int StandardPlayer::getGold()
{
	return _gold;
}

void StandardPlayer::setGold(int gold)
{
	_gold = gold;
}