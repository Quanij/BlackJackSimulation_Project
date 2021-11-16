#ifndef TRAFFIC_GEN_H
#define TRAFFIC_GEN_H

#include <fstream>
#include <vector>

#include "Player.h"
#include "Dealer.h"
#include "Table.h"

using std::vector;
using std::string;
using std::ifstream;

class TrafficGen
{
	enum StratType
	{
		Random = 0, Mimic = 1, Safe = 2, Custom = 3
	};
	enum ColorType
	{
		Red = 0, Green = 1, Black = 2, Blue = 3
	};

private:
	// table info
	int numTables;
	int minNumPlayer;
	int maxNumPlayer;
	int minNumDeck;
	int maxNumDeck;
	double transitionThreshold[4];

	// dealer info
	int numDealers;
	int dealerSalary;
	double dealerWinThreshold;
	double tableStartAmountRatio;
	double tableRefillAmountRatio;

	// player info
	int numPlayers;
	int stratDistr[4];
	int colorDistr[4][4];

	double playerArrivalProb;

	vector<Player>& PlayerBase;
	vector<Dealer>& DealerBase;
	vector<Table>& TableBase;

public:

	TrafficGen(vector<Player>& PlayerBase, vector<Dealer>& DealerBase, vector<Table>& TableBase);
	void LoadInputFile(string filename);
	void CreatePlayerBase();
	void CreateDealerBase();
	void CreateTables();
};


#endif
