#include "TrafficGen.h"

#include "TrafficGen.h"

TrafficGen::TrafficGen(vector<Player>& pb, vector<Dealer>& db, vector<Table>& tb)
	: PlayerBase(pb), DealerBase(db), TableBase(tb)
{
	LoadInputFile("test_input.txt");
}

void TrafficGen::LoadInputFile(string filename)
{
	ifstream infile(filename);
	if (infile.is_open())
	{
		string junk;

		cout << "Loading file:" << filename << endl;
		infile >> numTables;
		infile >> minNumPlayer;
		infile >> maxNumPlayer;
		infile >> minNumDeck;
		infile >> maxNumDeck;

		infile >> transitionThreshold[Red];
		infile >> transitionThreshold[Green];
		infile >> transitionThreshold[Black];
		infile >> transitionThreshold[Blue];

		infile >> numDealers;
		infile >> dealerSalary;
		infile >> dealerWinThreshold;
		infile >> tableStartAmountRatio;
		infile >> tableRefillAmountRatio;

		infile >> numPlayers;

		infile >> stratDistr[Random];
		infile >> stratDistr[Mimic];
		infile >> stratDistr[Safe];
		infile >> stratDistr[Custom];

		infile >> junk;
		infile >> colorDistr[Random][Red];
		infile >> colorDistr[Random][Green];
		infile >> colorDistr[Random][Black];
		infile >> colorDistr[Random][Blue];

		infile >> junk;
		infile >> colorDistr[Mimic][Red];
		infile >> colorDistr[Mimic][Green];
		infile >> colorDistr[Mimic][Black];
		infile >> colorDistr[Mimic][Blue];

		infile >> junk;
		infile >> colorDistr[Safe][Red];
		infile >> colorDistr[Safe][Green];
		infile >> colorDistr[Safe][Black];
		infile >> colorDistr[Safe][Blue];

		infile >> junk;
		infile >> colorDistr[Custom][Red];
		infile >> colorDistr[Custom][Green];
		infile >> colorDistr[Custom][Black];
		infile >> colorDistr[Custom][Blue];

		infile >> playerArrivalProb;

		cout << "Loading user input file status: DONE." << endl;
		infile.close();
	}
	else
	{
		cout << "Error! User input file not found..." << endl;
		exit(1);
	}

}

void TrafficGen::CreatePlayerBase()
{
    // use the stratDistr, colorDistr and numPlayers to generate the player objects
    // load objects into vector
}

void TrafficGen::CreateDealerBase()
{
    // use the dealer info from file to create dealer objects
    // load objects into vector
}

void TrafficGen::CreateTables()
{
    // use the table info to create tables
    // load objects into vector
}

