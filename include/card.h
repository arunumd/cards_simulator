//
// Created by arun on 5/25/23.
//

#ifndef CARDSDECKSIM_CARD_H
#define CARDSDECKSIM_CARD_H


struct Card {
    Card() = delete;
    explicit Card(std::string suit, unsigned char rank);
    std::string suit{};
    unsigned char rank{};
};

#endif //CARDSDECKSIM_CARD_H
