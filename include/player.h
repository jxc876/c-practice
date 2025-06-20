#ifndef PLAYER_H
#define PLAYER_H

typedef struct {
    // personal stats
    char firstname[20];
    char lastname[20];
    int age;
    int heightInches;
    int weightLbs;

    // attributes
    int shooting;
    int passing;
    int defense;
    int athleticism;
    int basketballIQ;
} NBAPlayer;

NBAPlayer generatePlayer();

void printPlayer(NBAPlayer p);

#endif //PLAYER_H
