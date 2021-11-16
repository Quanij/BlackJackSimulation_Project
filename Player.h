#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

class Player {
protected:
    int ID;
    int TableNumber;

    double StartAmount;// using it in the quitting behaviour of green player, and bet function of all players
    double Amount;

    int RoundLimit;   // using it in the quitting behaviour of black player
    int RoundsPlayed; // using it in the quitting behaviour of black player

    std::vector<char> TrackRecord;

public:
    virtual int Bet() = 0; // color class
    virtual bool QuittingBehaviour() = 0; // color class

    virtual bool Strategy(int) = 0; // strategy class

    virtual void Play(int);

    virtual void win();
    virtual void lose();

    virtual double getAmount() const { return Amount; } // using it in dealer class
    virtual void setAmount(double val) { Amount = val; }  // using it in dealer class
};

#endif
