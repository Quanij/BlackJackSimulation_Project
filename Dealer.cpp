#include "Dealer.h"


// constructor
Dealer::Dealer(int in_ID, int in_tableNumber, double startMoney)
{
	ID = in_ID;
	TableNumber = in_tableNumber;
	Amount = startMoney; // mainly we create dealer constructor to control this variable 
	// and test quittingBehaviour function 
	salary = 0.0;
}

double Dealer::DrawMoney()
{
	// TODO: determine how much money to draw when dealers money becomes 0

	return 10000.0;
}

void Dealer::GoToLounge()
{
	// TODO: dealer goes to lounge 
	//std::cout << "Dealer is in the lounge " << std::endl;
	
}



int Dealer::Bet()
{
	// TODO: bet money
	return 0;
}

bool Dealer::QuittingBehaviour()
{
	// when to draw money?
	if (Amount <= 0)
	{
		Amount = DrawMoney();
	}

	// when to go to lounge?
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

	// TODO: threshold should be user input
	double threshold = 40.0f;

	if (TrackRecord.size() > 0)
	{
		double win_percent = (double)wins / TrackRecord.size() * 100;
		if (win_percent <= threshold)
		{
			GoToLounge();
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}


bool Dealer::Strategy(int handScore)
{
	if (handScore <= 16)
	{
		return true;
	}
	else
	{
		return false;
	}
}

 
void Dealer::Play(int handScore)
{
	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Dealer drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Dealer stayed..." << std::endl;
	}
}



void Dealer::UpdateSalary()
{
	//TODO: determine salary function
	double roundRate = 100.0;
	salary = TrackRecord.size() * roundRate;
}

void Dealer::win()
{
	Player::win();
}

void Dealer::lose()
{
	Player::lose();
}
