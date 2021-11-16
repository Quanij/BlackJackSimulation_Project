#include "SystemController.h"

SystemController::SystemController()
{
	traffGen = new TrafficGen(PlayerBase, DealerBase, Tables);
}
