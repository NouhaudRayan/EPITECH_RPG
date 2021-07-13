/*
** EPITECH PROJECT, 2021
** button display
** File description:
** button_display
*/

#include "function.h"

void button_name_display(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1427 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 1498 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 497 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 575)
            sfRenderWindow_drawSprite(use->window, use->menu.name.arrow.sprite, NULL);
}