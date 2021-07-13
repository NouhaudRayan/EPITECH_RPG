/*
** EPITECH PROJECT, 2021
** button in green
** File description:
** button_in_green
*/

#include "function.h"

void button_in_green(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 522 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1401 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 532 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 652)
        sfRenderWindow_drawSprite(use->window, use->menu.launch.play.sprite, NULL);
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1000 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1400 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 715 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 836)
        sfRenderWindow_drawSprite(use->window, use->menu.launch.exit.sprite, NULL);
    if (sfMouse_getPositionRenderWindow(use->window).x >= 520 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 919 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 715 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 836)
        sfRenderWindow_drawSprite(use->window, use->menu.launch.settings.sprite, NULL);
}