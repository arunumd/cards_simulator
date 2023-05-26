//
// Created by arun on 5/25/23.
//

#ifndef CARDSDECKSIM_PLAY_H
#define CARDSDECKSIM_PLAY_H

#include "card.h"
#include "vector"

class Play {
public:
    Play();
    ~Play() = default;
    void shuffle();
    void deal_card();
    void initialize();

private:
    std::vector<Card> deck_;
};

#endif //CARDSDECKSIM_PLAY_H
