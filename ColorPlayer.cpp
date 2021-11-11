#include "ColorPlayer.h"
#include<iostream>

// Red
int RedPlayer::Bet()
{
	int amount = ((rand() % (9 - 1 + 1)) + 1) * 5; /////random number between 5 bet and 45, multiples of 5
	return amount;
}


// losing behaviour : when the player loses 60% of the rounds (after first round)
bool RedPlayer::QuittingBehaviour()
{
	int wins = 0;
	int losses = 0;
	for (char& c : TrackRecord)
	{
		if (c == 'W')
		{
			wins++;
		}
		else if (c == 'L')
		{
			losses++;
		}
	}

	double quitLimit = 60.0f;

	if (TrackRecord.size() > 0)
	{
		double lose_percent = (double)losses / TrackRecord.size() * 100;
		if (lose_percent >= quitLimit)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;

	/*
	double loss = std::count(TrackRecord.begin(), TrackRecord.end(), 'L');

	if ((loss / TrackRecord.size()) >= 0.6) {
		std::cout << "Players lost 60% or more!";
	}
	else {
		std::cout << "Player lost less than 60%";
	}
	return false;*/
}


// Green
int GreenPlayer::Bet()
{
	int amount = ((rand() % (19 - 10 + 1)) + 10) * 5; /////random number between 50 bet and 95, multiples of 5
	return amount;
	/*
	int betAmount = 100;
	int multiplier = rand() % 10;
	betAmount += 5 * multiplier;
	return betAmount;*/
}

// losing behaviour : when the losing player has 10% amount left
bool GreenPlayer::QuittingBehaviour()
{
	double start = 100;
	double amount = 120;
	double total = start * 0.1; //10

	if (total >= amount) {
		std::cout << "Quitting";
		return true;
	}
	else {
		std::cout << "Not Quitting";
		return false;

	}
}


// Black
int BlackPlayer::Bet()
{
	int amount = ((rand() % (49 - 10 + 1)) + 10) * 10; /////random number between 100 bet and 490, multiples of 10

	return amount;
}

// losing behaviour : when the player has played for a given number of rounds
bool BlackPlayer::QuittingBehaviour()
{

	if (TrackRecord.size() >= 4) {
		//std::cout << "I quit";
		return true;
	}
	else {
		//std::cout << "I do NOT quit";
		return false;
	}

}


// Blue
int BluePlayer::Bet()
{
	int amount = ((rand() % (100 - 50 + 1)) + 50) * 10; /////random number between 500 bet and 1000, multiples of 10
	return amount;
	/*
	int betAmount = 500;
	int multiplier = rand() % 51;
	betAmount += 10 * multiplier;
	return betAmount;*/
}

// losing behaviour : when the player loses 3 consecutive rounds
bool BluePlayer::QuittingBehaviour()
{
	if (TrackRecord.size() > 2)
	{
		int lastIndex = TrackRecord.size() - 1;
		if (TrackRecord[lastIndex] == 'L' &&
			TrackRecord[lastIndex - 1] == 'L' &&
			TrackRecord[lastIndex - 2] == 'L')
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
