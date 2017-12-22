#include <locale>
#include <cstdlib>

#include "Log.h"
#include "Enum.h"
#include "Player.h"
#include "Dealer.h"
#include "Game.h"


int main()
{
	setlocale(LC_ALL, "Russian");

	int cLogs = 4;
	Log* logs[4]{ new Log(),new Log(),new Log(),new Log() };
	
	for (int i = 0; i < 4; i++)
	{
		logs[i]->initDeck(TypeDeck::Full);
	}

	Player* player = new Player(9999);
	Dealer* dealer = new Dealer();

	Game game(dealer, player);
	game.setLog(logs[0], cLogs);

	while (game.init())
	{
		game.takeCardsDealer();
		game.takeCardsGambler();
		do
		{
			game.printStatusDeck();
			game.printCardsDealer(0);
			game.printCardsGambler();
			game.printMenu();
		} while (game.replicateChoice(game.getChoice()));

		game.dropCards();
	}

	delete player;
	delete dealer;

	system("pause");
	return 0;
}