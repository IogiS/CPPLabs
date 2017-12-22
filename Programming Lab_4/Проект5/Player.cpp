#include "Player.h"
#include "Log.h"

Player::Player(int money) : money(money)
{
	hands = new Hand[maxcounthands];
}

Player::~Player()
{
	delete hands;
}

int Player::getmoney()
{
	return money;
}

int Player::getmaxcounthands()
{
	return maxcounthands;
}

int Player::getcounthands()
{
	return counthands;
}

void Player::setmoney(int money)
{
	this->money = money;
}

void Player::setcounthands(int counthands)
{
	this->counthands = counthands;
}

void Player::clear()
{
	for (int i = counthands; i >= 0; --i)
	{
		hands[i].clear();
	}

	setcounthands(0);
}

void Player::takeCards(Log* log)
{
	for (int i = 0; i <= counthands; i++)
	{
		hands[i].takeCard(log);
	}
}

Hand* Player::getHand()
{
	return hands;
}

void Player::split()
{
	int tmp_counthands = getcounthands();
	for (int cHand = 0; cHand <= tmp_counthands; cHand++)
	{
		if (hands[cHand].isSplit())
		{
			counthands++;
			int mid = hands[cHand].getcountcards() % 2 == 0 ? hands[cHand].getcountcards() / 2 : hands[cHand].getcountcards() / 2 + 1;

			for (int i = mid; i < hands[cHand].getcountcards(); i++)
			{
				std::swap
				(
					hands[cHand].getCards()[i],
					hands[counthands].getCards()[hands[counthands].getcountcards()]
				);
				hands[cHand].setcountcards(hands[cHand].getcountcards() - 1);
				hands[counthands].setcountcards(hands[counthands].getcountcards() + 1);
			}
		}
	}
}