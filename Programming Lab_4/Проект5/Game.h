#pragma once

#include "Player.h"
#include "Dealer.h"
#include "Log.h"
#include "Card.h"

class Game
{
	int cash;
	bool doubleNow = false;
	int countdecks;
	Log* decks;

	Dealer* dealer;
	Player* player;


public:
	Game(Dealer* dealer, Player* player);
	~Game();

	int getChoice();

	void setLog(Log* decks, int count);
	void takeCardsDealer();
	void takeCardsGambler();
	void calculateScore();
	void printStatusDeck();
	void printCardsDealer(bool variant);
	void printCardsGambler();
	void printMenu();
	void dropCards();
	bool init();
	bool checkPerebor();
	bool isSplit();
	bool isDouble();
	bool replicateChoice(int choice);

};