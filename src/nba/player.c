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
    int fIndex = rand() % NUM_NAMES;
    int lIndex = rand() % NUM_NAMES;

    // personal stats
    p.age = 19 + rand() % 22;
    p.heightInches = 72 + rand() % 17;
    p.weightLbs = 180 + rand() % 71;

    // attributes
    p.shooting = rand() % 100;
    p.passing = rand() % 100;
    p.defense = rand() % 100;
    p.athleticism = rand() % 100;
    p.basketballIQ = rand() % 100;

    return p;
}

void printPlayer(NBAPlayer p) {
    printf("Name: %s %s \n", p.firstname, p.lastname);
    printf("Age: %d \n", p.age);
    printf("Height: %d ft %d in \n", p.heightInches / 12, p.heightInches % 12);
    printf("Weight: %d lbs \n", p.weightLbs);

    printf("Skills \n");
    printf("\tShooting: %d \n", p.shooting);
    printf("\tPassing: %d \n", p.passing);
    printf("\tDefense: %d \n", p.defense);
    printf("\tAthleticism: %d \n", p.athleticism);
    printf("\tBasketballIQ: %d \n", p.basketballIQ);
    printf("-----------------------------\n");
}