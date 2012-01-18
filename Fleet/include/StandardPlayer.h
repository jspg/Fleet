#ifndef STANDARDPLAYER_H
#define STANDARDPLAYER_H

class StandardPlayer {
public:
	StandardPlayer(int gold);
	int getGold();

private:
	void setGold(int gold);
	int _gold;
};

#endif