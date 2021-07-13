/*
** EPITECH PROJECT, 2021
** fill up intro
** File description:
** fill_up_intro_set_t
*/

#include "function.h"

void fill_up_intro_set_t(rpg *use)
{
    use->menu.intro.boolean = 1;
    background_set(&use->menu.intro.start, \
    "sprites/animation/menu/intro_start.png", dimension(0, 0, 1920, 1080), \
    position(0, 0));
    background_set(&use->menu.intro.end, \
    "sprites/animation/menu/intro_end.png", dimension(0, 0, 1920, 1080), \
    position(0, 0));
}