/*
** EPITECH PROJECT, 2021
** final
** File description:
** fill_up_space_set_t
*/

#include "function.h"

void fill_up_space_set_t(rpg *use)
{
    use->game.space.boolean = 0;
    background_set(&use->game.space.back, "sprites/hud/space/space.png",\
    dimension(0, 0, 3240, 3840), position(6820, 17910));
    background_set(&use->game.space.interact, \
    "sprites/animation/space/press_e.png", dimension(0, 0, 1131, 81), \
    position(500, 950));
    spaceship_set(&use->game.space.spaceship, \
    "sprites/personnage/space/spaceship.png", dimension(0, 0, 161, 159), \
    position(960, 540));
}