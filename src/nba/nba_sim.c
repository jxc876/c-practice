#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "player.h"

#define NUM_PLAYERS 5

int main() {
    printf("starting simulation\n");

    srand(time(NULL));

    NBAPlayer players[NUM_PLAYERS];

    for (int i = 0; i < NUM_PLAYERS; i++) {
        players[i] = generatePlayer();
        printPlayer(players[i]);
    }
    return EXIT_SUCCESS;
}
