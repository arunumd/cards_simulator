//
// Created by arun on 5/26/23.
//
#include <string>
#include <utility>
#include "card.h"


Card::Card(std::string suit, unsigned char rank) : suit(std::move(suit)), rank(rank) {
}
