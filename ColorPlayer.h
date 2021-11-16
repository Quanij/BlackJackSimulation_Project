#ifndef COLOR_PLAYER_H
#define COLOR_PLAYER_H

/// hi hihihihih




#include "Player.h"
#include <random>

class RedPlayer : public Player {
public:
    int Bet() override;
    bool QuittingBehaviour() override;
};

class GreenPlayer : public Player {
public:
    int Bet() override;
    bool QuittingBehaviour() override;
};

class BlackPlayer : public Player {
public:
    int Bet() override;
    bool QuittingBehaviour() override;
};

class BluePlayer : public Player {
public:
    int Bet() override;
    bool QuittingBehaviour() override;
};


#endif