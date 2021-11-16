#ifndef SYSTEM_CONTROLLER_H
#define SYSTEM_CONTROLLER_H

#include <vector>

#include "TrafficGen.h"
#include "Player.h"
#include "Dealer.h"
#include "Table.h"

class SystemController
{
private:
	TrafficGen* traffGen;

	vector<Player> PlayerBase;
	vector<Dealer> DealerBase;
	vector<Table> Tables;

public:
	SystemController();
};

#endif