#ifndef COLOR_PLAYER_H
#define COLOR_PLAYER_H


#include "Player.h"
#include <random>


class ColorPlayer : public Player {
protected:
    int start_amount;
    int end_amount;
    int multiple;
public:
    ColorPlayer()
    {
        start_amount = 0;
        end_amount = 0;
        multiple = 0;
    }
    int Bet() override
    {
        int amount = start_amount;
        int additive = rand() % (((end_amount - start_amount) / multiple) + 1);
        amount += multiple * additive;
        return amount;
    }
};


class RedPlayer : public ColorPlayer {
public:
    RedPlayer();
    bool QuittingBehaviour() override;
};


class GreenPlayer : public ColorPlayer {
public:
    GreenPlayer();
    bool QuittingBehaviour() override;
};


class BlackPlayer : public ColorPlayer {
public:
    BlackPlayer();
    bool QuittingBehaviour() override;
};


class BluePlayer : public ColorPlayer {
public:
    BluePlayer();
    bool QuittingBehaviour() override;
};


#endif
