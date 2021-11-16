#include "ColorPlayer.h"


// Red
RedPlayer::RedPlayer()
{
	start_amount = 5;
	end_amount = 45;
	multiple = 5;
}

bool RedPlayer::QuittingBehaviour()
{
	int wins = 0;
	int losses = 0;
	for (char& c : TrackRecord)
	{
		if (c == 'W')
			wins++;
		else if (c == 'L')
			losses++;
	}

	double quitLimit = 60.0f;

	if (TrackRecord.size() > 1)
	{
		double lose_percent = (double)losses / TrackRecord.size() * 100.0;
		if (lose_percent >= quitLimit)
		{
			return true;
		}
	}

	return false;
}


// Green
GreenPlayer::GreenPlayer()
{
	start_amount = 50;
	end_amount = 95;
	multiple = 5;
}

bool GreenPlayer::QuittingBehaviour()
{
	if (Amount <= (StartAmount * 0.1))
		return true;
	else
		return false;
}


// Black
BlackPlayer::BlackPlayer()
{
	start_amount = 100;
	end_amount = 490;
	multiple = 10;
}

bool BlackPlayer::QuittingBehaviour()
{
	if (RoundsPlayed >= RoundLimit)
		return true;
	else
		return false;
}


// Blue
BluePlayer::BluePlayer()
{
	start_amount = 500;
	end_amount = 1000;
	multiple = 10;
}

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
	}
	return false;
}

