#include "StrategyPlayer.h"


// Red Player ---------------------------------
// Red Player ---------------------------------
// Red Player ---------------------------------
// Red Player ---------------------------------
 

// --------------------------------- Random Player ----------------------------------------------------------//

void RandomRedPlayer::Play(int handScore)
{
	cout << "\n Random Red player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {

		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}

		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << " Random red player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << " Random red player stayed..." << std::endl;
			break;
		}
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
	cout << "\n Mimic Red player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {

		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}

		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << " Mimic red player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << " Mimic red player stayed..." << std::endl;
			break;
		}
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
	cout << "\n Safe Red player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {

		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}

		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << " Safe red player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << " Safe red player stayed..." << std::endl;
			break;
		}
	}
}



bool SafeRedPlayer::Strategy(int handScore)
{
	if (handScore > 16 && handScore <= 21) {
		return false;
	}
	else {
		return true;
	}
}



// --------------------------------- Custom Player ----------------------------------------------------------//


void CustomRedPlayer::Play(int handScore)
{
	cout << "\n Custom Red player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {

		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}

		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << " Custom red player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << " Custom red player stayed..." << std::endl;
			break;
		}
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
	cout << "\n Random Green player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {

		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}

		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << " Random green player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << " Random green player stayed..." << std::endl;
			break;
		}
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
	if (number < 21) {
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
	cout << "\n Mimic Green player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {

		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}

		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << " Mimic green player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << " Mimic green player stayed..." << std::endl;
			break;
		}
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
	cout << "\n Safe Green player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {

		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}

		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << " Safe green player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << " Safe green player stayed..." << std::endl;
			break;
		}
	}
}



bool SafeGreenPlayer::Strategy(int handScore)
{
	if (handScore > 16 && handScore <= 21) {
		return false;
	}
	else {
		return true;
	}
}



// --------------------------------- Custom Player ----------------------------------------------------------//


void CustomGreenPlayer::Play(int handScore)
{
	cout << "\n Custom Green player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {

		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}

		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << " Custom green player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << " Custom green player stayed..." << std::endl;
			break;
		}
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


// Black Player ---------------------------------
// Black Player ---------------------------------
// Black Player ---------------------------------
// Black Player ---------------------------------

// --------------------------------- Random Player ----------------------------------------------------------//

void RandomBlackPlayer::Play(int handScore)
{
	cout << "\n Random Black player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {

		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}

		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << " Random black player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << " Random black player stayed..." << std::endl;
			break;
		}
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
	if (number < 21) {
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
	cout << "\n Mimic Black player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {

		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}

		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << " Mimic black player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << " Mimic black player stayed..." << std::endl;
			break;
		}
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
	cout << "\n Safe Black player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {

		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}

		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << " Safe black player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << " Safe black player stayed..." << std::endl;
			break;
		}
	}
}



bool SafeBlackPlayer::Strategy(int handScore)
{
	if (handScore > 16 && handScore <= 21) {
		return false;
	}
	else {
		return true;
	}
}



// --------------------------------- Custom Player ----------------------------------------------------------//


void CustomBlackPlayer::Play(int handScore)
{
	cout << "\n Custom Black player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {

		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}

		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << " Custom black player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << " Custom black player stayed..." << std::endl;
			break;
		}
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

// Blue Player ---------------------------------
// Blue Player ---------------------------------
// Blue Player ---------------------------------
// Blue Player ---------------------------------


// --------------------------------- Random Player ----------------------------------------------------------//

void RandomBluePlayer::Play(int handScore)
{
	cout << "\nRandom Blue player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {

		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}

		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << "Random blue player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << "Random blue player stayed..." << std::endl;
			break;
		}
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
	if (number < 21) {
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
	cout << "\nMimic Blue player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {
		
		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}
		
		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << "Mimic blue player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << "Mimic blue player stayed..." << std::endl;
			break;
		}
		
	}
}


bool MimicBluePlayer::Strategy(int handScore)
{
	if (handScore <= 16)
	{
		//std::cout << "Mimic blue player drew a card!" << std::endl;
		return true;
	}
	else
	{
		//std::cout << "Mimic blue player stayed..." << std::endl;
		return false;
	}
}

// --------------------------------- Safe Player ----------------------------------------------------------//


void SafeBluePlayer::Play(int handScore)
{
	cout << "\nSafe Blue player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {

		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}

		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << "Safe blue player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << "Safe blue player stayed..." << std::endl;
			break;
		}
	}
}



bool SafeBluePlayer::Strategy(int handScore)
{
	if (handScore > 16 && handScore < 21) {
		return false;
	}
	else {
		return true;
	}
}


// --------------------------------- Custom Player ----------------------------------------------------------//


void CustomBluePlayer::Play(int handScore)
{
	cout << "\nCustom Blue player Played!" << endl;

	std::cout << "Hand Score : " << handScore << std::endl;
	for (int i = 0; i < handScore; i++) {

		if (handScore == 21) {
			std::cout << "Black Jack!!!" << std::endl;;
			break;
		}

		if (handScore > 21) {
			std::cout << "Bust!!!, Play again!!" << std::endl;;
			break;
		}
		if (Strategy(handScore))
		{
			std::cout << "Custom blue player drew a card!" << std::endl;
			break;
		}
		if (!Strategy(handScore))
		{
			std::cout << "Custom blue player stayed..." << std::endl;
			break;
		}
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


