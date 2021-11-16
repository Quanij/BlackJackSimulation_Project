#ifndef DEALER_H
#define DEALER_H

#include "Player.h"

#include <iostream>

class Dealer : public Player {
	double DrawMoney();
	void GoToLounge();
	double salary;

public:
	Dealer(int, int, double);

	int Bet() override;
	bool QuittingBehaviour() override;

	bool Strategy(int) override;

	void UpdateSalary();
	double getSalary() { return salary; }

	void win() override;
	void lose() override;

};

#endif
