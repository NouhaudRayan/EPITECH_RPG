/*
** EPITECH PROJECT, 2021
** menu
** File description:
** fill_up_load_set_t
*/

#include "function.h"

void fill_up_load_set_t(rpg *use)
{
    background_set(&use->load.back, \
    "sprites/hud/load/bouckybouco.png", dimension(0, 0, 1920, 1080), \
    position(0,0));
    background_set(&use->load.round, \
    "sprites/animation/load/around.png", dimension(0, 0, 100, 100), \
    position (1800, 960));
    background_set(&use->load.barre, \
    "sprites/animation/load/progress_bar.png", dimension(0, 0, 0, 1080), \
    position(0, 0));
}