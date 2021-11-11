#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

class Player {
protected:
    int ID;
    int TableNumber;
    double Amount;
    std::vector<char> TrackRecord; // track the record for each player , and 
    //it keeps a running record of wins and losses for all players
    // both dealers and normal players, the reason of declaring it 
    // because of using it in Salary for Dealer, and also Quitting Bheavior for players



public:
    virtual int Bet() = 0;
    virtual void Play(int) = 0; // to pass int the hardcoded hand score to simluate Play
    virtual bool QuittingBehaviour() = 0;
    virtual bool Strategy(int) = 0; // to pass int the hardcoded hand score 

    virtual void win(); //to record the actual wins and losses
    virtual void lose();

    virtual double getAmount() const { return Amount; } // these method for debugging dealer money amount 
    virtual void setAmount(double val) { Amount = val; } // setting an amount to test the draw money function
};

#endif