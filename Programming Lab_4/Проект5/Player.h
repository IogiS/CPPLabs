#pragma once

#include "Hand.h"
#include "Log.h"

class Player
{
private:
	const int maxcounthands = 10;
	int counthands = 0;
	int money;

	Hand* hands;


public:
	Hand* getHand();
	int getmoney();
	int getmaxcounthands();
	int getcounthands();
	void setcounthands(int counthands);
	void setmoney(int money);

	void split();

	void clear();
	void takeCards(Log* log);


	Player(int money);
	~Player();
};