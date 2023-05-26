#ifndef CARDSDECKSIM_PLAY_H
#define CARDSDECKSIM_PLAY_H

#include "card.h"
#include "vector"

/*!
 * @author Arun Kumar
 * @date May 25, 2023
 * @copyright Copyright 2023, Arun Kumar. All rights reserved.
 * @license This project is released under the MIT License.
 * @brief The Play class implements the cards shuffling and drawing utilities for using in a Poker game. The shuffle
 * method utilises a random number generator engine in order to generate a pseudo random number from a uniform
 * distribution. The deal_card method draws a card out of a deck and the deck size reduces by the drawn card. When all
 * cards are drawn out by the deal_card method, the deck becomes empty and there will be no more cards to draw. In that
 * case, one has to shuffle the deck again.
 */
class Play {
public:
    /*!
     * @brief Default constructor to initialize the cards game
     */
    Play();
    /*!
     * @brief Trivial default destructor
     */
    ~Play() = default;
    /*!
     * @brief Method to randomly shuffle the deck of cards
     */
    void shuffle();
    /*!
     * @brief Method to deal a card out of the randomly shuffled deck of cards. When all the cards (52) are dealt,
     * any consequent calls to this method will result in no new card being drawn. The shuffle method also implicitly
     * calls initialize() if the game has already been played at least once
     */
    void deal_card();
    /*!
     * @brief Method to initialize the deck of cards comprising 4 suits and 13 ranks. Each card is of a suit and a rank
     */
    void initialize();

private:
    std::vector<Card> deck_; /*! Cards deck container */
    State state_; /*! Variable to store the state of the game */
};

#endif //CARDSDECKSIM_PLAY_H
