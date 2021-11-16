#ifndef STRATEGY_PLAYER_H
#define STRATEGY_PLAYER_H

#include <iostream>

#include "ColorPlayer.h"

using std::cout;
using std::endl;

// Strategy Helper class, its main job is to contain common code
class Strat {
public:
    //using static because then i can use the function directly without having to instanciate
    //the class Strat "without creating an object of class"
    static bool random(int);
    static bool mimic(int);
    static bool safe(int);
    static bool custom(int);
};


////////////////// Red players
class RandomRedPlayer : public RedPlayer {
public:
    bool Strategy(int handScore) override { return Strat::random(handScore); };
};

class MimicRedPlayer : public RedPlayer {
public:
    bool Strategy(int handScore) override { return Strat::mimic(handScore); };
};

class SafeRedPlayer : public RedPlayer {
public:
    bool Strategy(int handScore) override { return Strat::safe(handScore); };
};

class CustomRedPlayer : public RedPlayer {
public:
    bool Strategy(int handScore) override { return Strat::custom(handScore); };
};

////////////////// Green players
class RandomGreenPlayer : public GreenPlayer {
public:
    bool Strategy(int handScore) override { return Strat::random(handScore); };
};

class MimicGreenPlayer : public GreenPlayer {
public:
    bool Strategy(int handScore) override { return Strat::mimic(handScore); };
};

class SafeGreenPlayer : public GreenPlayer {
public:
    bool Strategy(int handScore) override { return Strat::safe(handScore); };
};

class CustomGreenPlayer : public GreenPlayer {
public:
    bool Strategy(int handScore) override { return Strat::custom(handScore); };
};



////////////////// Black players
class RandomBlackPlayer : public BlackPlayer {
public:
    bool Strategy(int handScore) override { return Strat::random(handScore); };
};

class MimicBlackPlayer : public BlackPlayer {
public:
    bool Strategy(int handScore) override { return Strat::mimic(handScore); };
};

class SafeBlackPlayer : public BlackPlayer {
public:
    bool Strategy(int handScore) override { return Strat::safe(handScore); };
};

class CustomBlackPlayer : public BlackPlayer {
public:
    bool Strategy(int handScore) override { return Strat::custom(handScore); };
};



////////////////// Blue players
class RandomBluePlayer : public BluePlayer {
public:
    bool Strategy(int handScore) override { return Strat::random(handScore); };
};

class MimicBluePlayer : public BluePlayer {
public:
    bool Strategy(int handScore) override { return Strat::mimic(handScore); };
};

class SafeBluePlayer : public BluePlayer {
public:
    bool Strategy(int handScore) override { return Strat::safe(handScore); };
};

class CustomBluePlayer : public BluePlayer {
public:
    bool Strategy(int handScore) override { return Strat::custom(handScore); };
};




#endif
