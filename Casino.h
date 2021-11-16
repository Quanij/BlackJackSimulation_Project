#ifndef CASINO_H
#define CASINO_H

#include "SystemController.h"

class Casino
{
	SystemController* sysCon;

public:
	Casino();
	~Casino();
	void startSimulation();
	void endSimulation();
};

#endif