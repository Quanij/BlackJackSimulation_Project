#ifndef BLACK_JACK_TABLE_H
#define BLACK_JACK_TABLE_H

#include <vector>
#include "Player.h"

using std::vector;
using std::string;


// card class
class Card
{
public:
	enum Suit
	{
		Hearts = 3, Diamonds = 4, Clubs = 5, Spades = 6
	};
	int rank;
	char suit;
};


// deck class
class Deck
{
public:
	vector<Card> deck;
	void addDeck();
};


// table class
class Table
{
private:
	int tableNumber;
	int dealerNumber;
	double BetAmount;
	vector<Player*> players;
	Deck deck;

	void BettingTurn();
	void PlayerTurn();
	void DealerTurn();
	void ResultStage();

public:
	void PlayGame();

};

#endif