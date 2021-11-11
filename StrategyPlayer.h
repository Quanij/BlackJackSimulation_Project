#ifndef STRATEGY_PLAYER_H
#define STRATEGY_PLAYER_H

#include <iostream>

#include "ColorPlayer.h"

using std::cout;
using std::endl;

////////////////// Red players
class RandomRedPlayer : public RedPlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};

class MimicRedPlayer : public RedPlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};

class SafeRedPlayer : public RedPlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};

class CustomRedPlayer : public RedPlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};

////////////////// Green players
class RandomGreenPlayer : public GreenPlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};

class MimicGreenPlayer : public GreenPlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};

class SafeGreenPlayer : public GreenPlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};

class CustomGreenPlayer : public GreenPlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};

////////////////// Blue players
class RandomBluePlayer : public BluePlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};

class MimicBluePlayer : public BluePlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};

class SafeBluePlayer : public BluePlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};

class CustomBluePlayer : public BluePlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};

////////////////// Black players
class RandomBlackPlayer : public BlackPlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};

class MimicBlackPlayer : public BlackPlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};

class SafeBlackPlayer : public BlackPlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};

class CustomBlackPlayer : public BlackPlayer {
public:
    void Play(int) override;
    bool Strategy(int) override;
};


#endif