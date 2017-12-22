#pragma once

#include "Enum.h"
#include "Card.h"

class Log
{
private:
	void createDeck();
	void shuffleDeck();

protected:
	int numbercard = 0;
	Card* cards;
	int countCards;
	const int countSuit = 4;

public:
	Log();
	void initDeck(TypeDeck type);
	int getCountCards();
	int getNumberCard();
	Card takeCard();
	~Log();
};