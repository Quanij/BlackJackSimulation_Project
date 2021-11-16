#include "StrategyPlayer.h"


bool Strat::random(int handScore)
{
	int min = handScore + 1;
	int max = handScore + 2;

	int number = (rand() % (max - min + 1)) + min;

	if (number < 21)
		return true;
	else
		return false;
}


bool Strat::mimic(int handScore)
{
	if (handScore <= 16)
		return true;
	else
		return false;
}


bool Strat::safe(int handScore)
{
	if (handScore > 16 && handScore < 21)
		return false;
	else
		return true;
}


bool Strat::custom(int handScore)
{
	if (handScore <= 16 && handScore >= 5)
		return true;
	else
		return false;
}

