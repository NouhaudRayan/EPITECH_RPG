/*
** EPITECH PROJECT, 2021
** menu
** File description:
** fill_up_launcher_set_t
*/

#include "function.h"

void fill_up_launcher_set_t(rpg *use)
{
    use->menu.launch.boolean = 0;
    background_set(&use->menu.launch.hud, \
    "sprites/hud/menu/hud_launch.png", dimension(1920, 0, 1920, 1080), \
    position(0, 0));
    button_set(&use->menu.launch.play, \
    "sprites/hud/menu/play_launch.png", dimension(0, 0, 1920, 1080), \
    position(0, 0));
    button_set(&use->menu.launch.exit, \
    "sprites/hud/menu/exit_launch.png", dimension(0, 0, 1920, 1080), \
    position(0, 0));
    button_set(&use->menu.launch.settings, \
    "sprites/hud/menu/option_launch.png", dimension(0, 0, 1920, 1080), \
    position(0, 0));
}