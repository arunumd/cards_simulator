/*!
 * @author Arun Kumar
 * @date May 25, 2023
 * @copyright Copyright 2023, Arun Kumar. All rights reserved.
 * @license This project is released under the MIT License.
 * @brief This file is the main source file for the cards simulator. The cards are drawn 60 times to show the result
 * after every draw. When the total number of draws exceed 52, no new card is drawn. The person has to shuffle the deck
 * by calling the shuffle() method.
 */

#include <iostream>
#include "play.h"

int main() {
    Play CardGame = Play();
    CardGame.shuffle();
    for (size_t i = 0; i < 60; i++) {
        CardGame.deal_card();
    }
    std::cout << "******************************************************" << "\n";
    CardGame.shuffle();
    for (size_t i = 0; i < 60; i++) {
        CardGame.deal_card();
    }
    return 0;
}