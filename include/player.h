#ifndef PLAYER_H
#define PLAYER_H

typedef struct {
    // personal stats
    char first_name[20];
    char last_name[20];
    int age;
    int height_inches;
    int weight_lbs;

    // attributes
    int shooting;
    int passing;
    int defense;
    int athleticism;
    int basketball_iq;
} NBAPlayer;

NBAPlayer generate_player();

void print_player(NBAPlayer p);

#endif //PLAYER_H
