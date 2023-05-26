#ifndef CARDSDECKSIM_CARD_H
#define CARDSDECKSIM_CARD_H

/*!
 * @author Arun Kumar
 * @date May 25, 2023
 * @copyright Copyright 2023, Arun Kumar. All rights reserved.
 * @license This project is released under the MIT License.
 * @brief The Card struct is a type for denoting each card in a deck of poker cards. Each card belongs to a suit (Spade,
 * Heart, Diamond, Club) and a rank (2, 3, 4, 5, 6, 7, 8, 9, 10). The Card type has two fields (suit and rank) to
 * encapsulate this basic information
 */
struct Card {
    /*! @brief The default constructor is deleted, since we don't want to create any card without a suit and a rank */
    Card() = delete;
    /*! @brief Explicit constructor is created for initialising an individual card with a defined suit and rank */
    explicit Card(std::string suit, unsigned char rank);

    /*! @brief Variable to store the suit info */
    std::string suit{};
    /*! @brief Variable to store the rank info */
    unsigned char rank{};
};

/*!
 * @brief Enum class to store the state information of the game play. Begin means the cards deck is played for the first
 * time, and Play means the cards deck has been already played at least once.
 */
enum class State {
    Begin,
    Play
};

#endif //CARDSDECKSIM_CARD_H
