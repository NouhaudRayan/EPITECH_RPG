/*
** EPITECH PROJECT, 2021
** final
** File description:
** pos_button_detect
*/

#include "function.h"

void pos_button_detect(rpg *use, button_set_t button, sfVector2f pos_1, sfVector2f pos_2)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= pos_1.x &&
    sfMouse_getPositionRenderWindow(use->window).x <= pos_2.x &&
    sfMouse_getPositionRenderWindow(use->window).y >= pos_1.y &&
    sfMouse_getPositionRenderWindow(use->window).y <= pos_2.y)
        sfRenderWindow_drawSprite(use->window, button.sprite, NULL);
}