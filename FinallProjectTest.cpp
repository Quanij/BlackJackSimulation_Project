 #include <iostream>
#include <random>
#include <ctime>
#include <vector>

#include "StrategyPlayer.h"
#include "Dealer.h"

#include "Casino.h"

using std::vector;

void test_polymorphism()
{
    Player* players[16];

    // test polymorphism
    players[0] = new RandomRedPlayer();
    players[1] = new RandomGreenPlayer();
    players[2] = new RandomBluePlayer();
    players[3] = new RandomBlackPlayer();

    players[4] = new SafeRedPlayer();
    players[5] = new SafeGreenPlayer();
    players[6] = new SafeBluePlayer();
    players[7] = new SafeBlackPlayer();

    players[8] = new MimicRedPlayer();
    players[9] = new MimicGreenPlayer();
    players[10] = new MimicBluePlayer();
    players[11] = new MimicBlackPlayer();

    players[12] = new CustomRedPlayer();
    players[13] = new CustomGreenPlayer();
    players[14] = new CustomBluePlayer();
    players[15] = new CustomBlackPlayer();

    for (int i = 0; i < 16; i++)
    {
        // polymoprhic method
        players[i]->Play(18);
    }
}

void test_dealer()
{
    // simulate amount hitting 0
    Dealer* d = new Dealer(1, 5, 500);

    cout << "Starting amount:" << d->getAmount() << endl;
    d->setAmount(0);
    cout << "After zeroing out amount:" << d->getAmount() << endl;
    d->QuittingBehaviour();
    cout << "Amount after quitting behaviour:" << d->getAmount() << endl;

    // dealer play behaviour
    for (int i = 0; i < 22; i++)
    {
        d->Play(i);
    }


    // test Dealer track record
    if (d->QuittingBehaviour())
    {
        cout << "Dealer track record below threshold, dealer going to lounge..." << endl;
    }
    else
    {
        cout << "Dealer track record above threshold, dealer keeps his job!" << endl;
    }
    d->win();
    //d->win();

    d->lose();
    d->lose();
    if (d->QuittingBehaviour())
    {
        cout << "Dealer track record below threshold, dealer going to lounge..." << endl;
    }
    else
    {
        cout << "Dealer track record above threshold, dealer keeps his job!" << endl;
    }

    // test dealer salary
    d->UpdateSalary();
    cout << "Salary : " << d->getSalary() << endl;
}

void test_blue_bet()
{
    Player* p = new MimicBluePlayer();
    // testing Bet()
    for (int i = 0; i < 10; i++)
    {
        cout << "Blue Player bet " << p->Bet() << endl;
    }
    std::cout << std::endl;

}

void test_mimic_play()
{
    Player* blue_p = new MimicBluePlayer();
    Player* black_p = new MimicBlackPlayer();
    Player* green_p = new MimicGreenPlayer();
    Player* red_p = new MimicRedPlayer();

    blue_p->Play(15);
    blue_p->Play(18);
    std::cout << std::endl;

    black_p->Play(20);
    black_p->Play(13);
    std::cout << std::endl;

    green_p->Play(17);
    green_p->Play(19);
    std::cout << std::endl;

    red_p->Play(2);
    red_p->Play(8);
    std::cout << std::endl;

}

void test_blue_quit()
{
    Player* p = new MimicBluePlayer();

    for (int i = 1; i < 4; i++)
    {
        cout << "Loss #" << i << endl;
        p->lose();
        if (p->QuittingBehaviour())
        {
            cout << "Blue player quit the game..." << endl;
        }
        else
        {
            cout << "Blue player stays strong!" << endl;
        }
    }
}


int main()
{
    srand(time(NULL));

    //test_polymorphism();

    //test_dealer();

    //test_blue_bet();

    //test_mimic_play();

    //test_blue_quit();

    //for(char i = 3; i < 7; i++)
    //    cout << (int)i << ":" << i << endl;

    Casino myCasino;

    return 0;
}


