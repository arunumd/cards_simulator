/*!
 * @author Arun Kumar
 * @date May 25, 2023
 * @copyright Copyright 2023, Arun Kumar. All rights reserved.
 * @license This project is released under the MIT License.
 */

#include <string>
#include <utility>
#include "card.h"

Card::Card(std::string suit, unsigned char rank) : suit(std::move(suit)), rank(rank) {
}
