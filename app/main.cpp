#include <iostream>
#include "play.h"

int main() {
    Play CardGame = Play();
    CardGame.shuffle();
    for (size_t i = 0; i < 60; i++) {
        CardGame.deal_card();
    }
    return 0;
}