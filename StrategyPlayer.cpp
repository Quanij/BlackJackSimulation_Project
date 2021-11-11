#include "StrategyPlayer.h"


// Red Player ---------------------------------
// Red Player ---------------------------------
// Red Player ---------------------------------
// Red Player ---------------------------------
 

// --------------------------------- Random Player ----------------------------------------------------------//

void RandomRedPlayer::Play(int handScore)
{
	cout << "Random red player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Random red player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Random red player stayed..." << std::endl;
	}
}


bool RandomRedPlayer::Strategy(int handScore)
{
	//int min = 1;
	//int max = 2;
	int min = handScore + 1;
	int max = handScore + 2;

	int number;
	number = (rand() % (max - min + 1)) + min;
	if (number < 21) {
		//Bet();
		return true;
	}
	else {
		return false;
	}

}


// --------------------------------- Mimic Player ----------------------------------------------------------//


void MimicRedPlayer::Play(int handScore)
{
	cout << "Mimic red player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Mimic red player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Mimic red stayed..." << std::endl;
	}
}

bool MimicRedPlayer::Strategy(int handScore)
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

// --------------------------------- Safe Player ----------------------------------------------------------//


void SafeRedPlayer::Play(int handScore)
{
	cout << "Safe red player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Safe red player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Safe red player stayed..." << std::endl;
	}
}



bool SafeRedPlayer::Strategy(int handScore)
{
	if (handScore > 16) {
		return true;
	}
	else {
		return false;
	}
}



// --------------------------------- Custom Player ----------------------------------------------------------//


void CustomRedPlayer::Play(int handScore)
{
	cout << "Custom red player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Custom red player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Custom red player stayed..." << std::endl;
	}
}


bool CustomRedPlayer::Strategy(int handScore)
{
	if (handScore <= 16 && handScore >= 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}


// Green Player ---------------------------------
// Green Player ---------------------------------
// Green Player ---------------------------------
// Green Player ---------------------------------
 

// --------------------------------- Random Player ----------------------------------------------------------//


void RandomGreenPlayer::Play(int handScore)
{
	cout << "Random green player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Random green player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Random green player stayed..." << std::endl;
	}
}

bool RandomGreenPlayer::Strategy(int handScore)
{
	//int min = 1;
	//int max = 2;
	int min = handScore + 1;
	int max = handScore + 2;

	int number;
	number = (rand() % (max - min + 1)) + min;
	if (number < max) {
		//Bet();
		return true;
	}
	else {
		//cout << "Random Red Player Skips!" << endl;
		return false;
	}

}


// --------------------------------- Mimic Player ----------------------------------------------------------//


void MimicGreenPlayer::Play(int handScore)
{
	cout << "Mimic green player Played!" << endl;


	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Mimic green player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Mimic green player stayed..." << std::endl;
	}
}

bool MimicGreenPlayer::Strategy(int handScore)
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

// --------------------------------- Safe Player ----------------------------------------------------------//


void SafeGreenPlayer::Play(int handScore)
{
	cout << "Safe green player Played!" << endl;


	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Safe green player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Safe green player stayed..." << std::endl;
	}
}



bool SafeGreenPlayer::Strategy(int handScore)
{
	if (handScore > 16) {
		return true;
	}
	else {
		return false;
	}
}



// --------------------------------- Custom Player ----------------------------------------------------------//


void CustomGreenPlayer::Play(int handScore)
{
	cout << "Custom green player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Custom green player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Custom green player stayed..." << std::endl;
	}
}


bool CustomGreenPlayer::Strategy(int handScore)
{
	if (handScore <= 16 && handScore >= 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Blue Player ---------------------------------
// Blue Player ---------------------------------
// Blue Player ---------------------------------
// Blue Player ---------------------------------


// --------------------------------- Random Player ----------------------------------------------------------//

void RandomBluePlayer::Play(int handScore)
{
	cout << "Random blue player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Random blue player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Random blue player stayed..." << std::endl;
	}
}


bool RandomBluePlayer::Strategy(int handScore)
{
	//int min = 1;
	//int max = 2;
	int min = handScore + 1;
	int max = handScore + 2;

	int number;
	number = (rand() % (max - min + 1)) + min;
	if (number < max) {
		//Bet();
		return true;
	}
	else {
		//cout << "Random Red Player Skips!" << endl;
		return false;
	}

}


// --------------------------------- Mimic Player ----------------------------------------------------------//


void MimicBluePlayer::Play(int handScore)
{
	cout << "Mimic Blue player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Mimic blue player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Mimic blue player stayed..." << std::endl;
	}
}

bool MimicBluePlayer::Strategy(int handScore)
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

// --------------------------------- Safe Player ----------------------------------------------------------//


void SafeBluePlayer::Play(int handScore)
{
	cout << "Safe blue player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Safe blue player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Safe blue player stayed..." << std::endl;
	}
}



bool SafeBluePlayer::Strategy(int handScore)
{
	if (handScore > 16) {
		return true;
	}
	else {
		return false;
	}
}


// --------------------------------- Custom Player ----------------------------------------------------------//


void CustomBluePlayer::Play(int handScore)
{
	cout << "Custom blue player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Custom blue player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Custom blue player stayed..." << std::endl;
	}
}


bool CustomBluePlayer::Strategy(int handScore) {
	if (handScore <= 16 && handScore >= 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}


// Black Player ---------------------------------
// Black Player ---------------------------------
// Black Player ---------------------------------
// Black Player ---------------------------------

// --------------------------------- Random Player ----------------------------------------------------------//

void RandomBlackPlayer::Play(int handScore)
{
	cout << "Random black player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Random black player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Random black player stayed..." << std::endl;
	}
}



bool RandomBlackPlayer::Strategy(int handScore)
{
	//int min = 1;
	//int max = 2;
	int min = handScore + 1;
	int max = handScore + 2;

	int number;
	number = (rand() % (max - min + 1)) + min;
	if (number < max) {
		//Bet();
		return true;
	}
	else {
		//cout << "Random Red Player Skips!" << endl;
		return false;
	}

}


// --------------------------------- Mimic Player ----------------------------------------------------------//


void MimicBlackPlayer::Play(int handScore)
{
	cout << "Mimic black player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Mimic black player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Mimic black player stayed..." << std::endl;
	}
}

bool MimicBlackPlayer::Strategy(int handScore)
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

// --------------------------------- Safe Player ----------------------------------------------------------//


void SafeBlackPlayer::Play(int handScore)
{
	cout << "Safe black player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Safe black player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Safe black player stayed..." << std::endl;
	}
}



bool SafeBlackPlayer::Strategy(int handScore)
{
	if (handScore > 16) {
		return true;
	}
	else {
		return false;
	}
}



// --------------------------------- Custom Player ----------------------------------------------------------//


void CustomBlackPlayer::Play(int handScore)
{
	cout << "Custom black player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	if (Strategy(handScore))
	{
		// TODO: draw a card
		std::cout << "Custom black player drew a card!" << std::endl;
	}
	else
	{
		// TODO: stay
		std::cout << "Custom black player stayed..." << std::endl;
	}
}


bool CustomBlackPlayer::Strategy(int handScore)
{
	if (handScore <= 16 && handScore >= 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}


// ---------------------------------