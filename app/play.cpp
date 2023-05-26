/*!
 * @author Arun Kumar
 * @date May 25, 2023
 * @copyright Copyright 2023, Arun Kumar. All rights reserved.
 * @license This project is released under the MIT License.
 */

#include <vector>
#include <string_view>
#include <iostream>
#include <random>
#include "../include/play.h"

void Play::shuffle() {
    if (state_ == State::Play) initialize();
    std::random_device rd;
    std::mt19937 random_engine(rd());
    std::uniform_int_distribution distribution(0, 51);
    for (auto &card: deck_) {
        std::swap(card, deck_[distribution(random_engine)]);
    }
}

void Play::deal_card() {
    if (deck_.empty()) {
        std::cout << "Deck is empty" << std::endl;
        return;
    }
    Card drawn_card = deck_.back();
    if (drawn_card.rank == '\n') {
        std::cout << drawn_card.suit << "  " << static_cast<unsigned int>(drawn_card.rank) << "\n";
    } else std::cout << drawn_card.suit << "  " << (drawn_card.rank) << "\n";
    deck_.pop_back();
    state_ = State::Play;
}

Play::Play() {
    initialize();
    state_ = State::Begin;
}

void Play::initialize() {
    std::vector<std::string> suits{"Heart", "Spade", "Club", "Diamond"};
    std::vector<char> ranks{'A', 'J', 'Q', 'K', '2', '3', '4', '5', '6', '7', '8', '9', '\n'};
    for (auto &suit: suits) {
        for (auto &rank: ranks) {
            deck_.emplace_back(suit, rank);
        }
    }
    std::cout << "Cards deck initialised" << std::endl;
}
