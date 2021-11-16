#include "Casino.h"



Casino::Casino()
{
	sysCon = new SystemController();
}

Casino::~Casino()
{
	delete sysCon;
}

void Casino::startSimulation()
{
}

void Casino::endSimulation()
{
}
