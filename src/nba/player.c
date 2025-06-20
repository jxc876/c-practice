#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "player.h"

#define NUM_NAMES 5

//names
static char *firstNames[NUM_NAMES] = {
    "Michael", "Robert", "Vince", "Steven", "Kevin"
};

static char *lastNames[NUM_NAMES] = {
    "Jackson", "Williams", "White", "Ellis", "Carter"
};

NBAPlayer generatePlayer() {
    NBAPlayer p;

    // name
    int f_idx = rand() % NUM_NAMES;
    int l_idx = rand() % NUM_NAMES;
    // char *strcpy(char *dst, const char *src)
    strcpy(p.first_name, firstNames[f_idx]);
    strcpy(p.last_name, lastNames[l_idx]);

    // personal stats
    p.age = 19 + rand() % 22;
    p.height_inches = 72 + rand() % 17;
    p.weight_lbs = 180 + rand() % 71;

    // attributes
    p.shooting = rand() % 100;
    p.passing = rand() % 100;
    p.defense = rand() % 100;
    p.athleticism = rand() % 100;
    p.basketball_iq = rand() % 100;

    return p;
}

void printPlayer(NBAPlayer p) {
    printf("Name: %s %s \n", p.first_name, p.last_name);
    printf("Age: %d \n", p.age);
    printf("Height: %d ft %d in \n", p.height_inches / 12, p.height_inches % 12);
    printf("Weight: %d lbs \n", p.weight_lbs);

    printf("Skills \n");
    printf("\tShooting: %d \n", p.shooting);
    printf("\tPassing: %d \n", p.passing);
    printf("\tDefense: %d \n", p.defense);
    printf("\tAthleticism: %d \n", p.athleticism);
    printf("\tBasketballIQ: %d \n", p.basketball_iq);
    printf("-----------------------------\n");
}