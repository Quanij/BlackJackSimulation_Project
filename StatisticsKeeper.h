#ifndef STATISTICS_KEEPER_H
#define STATISTICS_KEEPER_H


class StatisticsKeeper
{
public:
	// stat variables for different statistics
	// best and worst player 
	double maxPlayerWinAmount;
	double maxPlayerLossAmount;

	// number of games played
	int totalRoundsPlayed;

	// casino's profit and loss
	double casinoStartAmount;
	double casinoEndAmount;
};

#endif
