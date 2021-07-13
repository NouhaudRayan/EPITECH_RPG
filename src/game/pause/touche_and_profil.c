/*
** EPITECH PROJECT, 2021
** touch and profil
** File description:
** sous fonction
*/

#include "function.h"

void touch_and_profil(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1400 && sfMouse_getPositionRenderWindow(use->window).x <= 1575 && sfMouse_getPositionRenderWindow(use->window).y >= 70 && sfMouse_getPositionRenderWindow(use->window).y <= 150)
    {
        use->game.pause.red_barre.rect.left = 7680;
        sfSprite_setTextureRect(use->game.pause.red_barre.sprite, use->game.pause.red_barre.rect);
        sfRenderWindow_drawSprite(use->window, use->game.pause.red_barre.sprite, NULL);
    }
}