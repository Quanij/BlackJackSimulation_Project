#ifndef DEALER_H
#define DEALER_H

#include "Player.h"
#include <iostream>

class Dealer : public Player {
	// we put private because i dont think we will ever use DrawMoiney of GoToLounge() in main.cpp
	// and we can change them in the future
	double DrawMoney();
	void GoToLounge();

	double salary;

public:
	Dealer();
	Dealer(int, int, double); // the purpose of creating the constructor to test the dealer
	// and because Dealer has more details than the other classes
	// so it helps making a constructor for him
	
	int Bet() override;
	bool QuittingBehaviour() override;
	
	void Play(int) override;
	bool Strategy(int) override;

	void UpdateSalary();
	double getSalary() { return salary; }

	void win() override;
	void lose() override;

	
};

#endif