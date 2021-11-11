#include "Player.h"

void Player::win()
{
	TrackRecord.push_back('W');
}

void Player::lose()
{
	TrackRecord.push_back('L');
}
