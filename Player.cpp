#include "Player.h"


void Player::Play(int handscore)
{
	if (handscore == 21) {
		std::cout << "Black Jack!!!" << std::endl;;
	}
	else if (handscore > 21) {
		std::cout << "Bust!!! Play again!!" << std::endl;;
	}
	else if (Strategy(handscore))
	{
		std::cout << "Player drew a card!" << std::endl;
	}
	else
	{
		std::cout << "Player stayed..." << std::endl;
	}
}


void Player::win()
{
	TrackRecord.push_back('W');
}

void Player::lose()
{
	TrackRecord.push_back('L');
}

