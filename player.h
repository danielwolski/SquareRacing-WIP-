#ifndef PLAYER_H
#define PLAYER_H

#include <stdbool.h>
#include "track.h"
#include "constants.h"

extern int is_corridor_locked;
extern int is_pitstop_locked;
extern pthread_mutex_t mutex;

typedef struct {
    int x;
    int y;
    int directionX;
    int directionY;
    int speed;
    int current_track_point;
    time_t speed_increase_start;
    int did_player_lock_corridor;
    int did_player_lock_pitstop;
    int color;
} Player;

Player* player_create(int x, int y);
void player_update_direction(Player* player);
void player_update_position(Player* player, SDL_Surface* trackSurface);
void player_destroy(Player* player);

#endif // PLAYER_H
