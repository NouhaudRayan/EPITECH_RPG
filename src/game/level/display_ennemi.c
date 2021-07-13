/*
** EPITECH PROJECT, 2021
** game
** File description:
** display_ennemi
*/

#include "function.h"

void handle_display_event(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1820 && \
    sfMouse_getPositionRenderWindow(use->window).x <= 1890
    && sfMouse_getPositionRenderWindow(use->window).y >= 25 && \
    sfMouse_getPositionRenderWindow(use->window).y <= 100) {
        sfRenderWindow_drawSprite(use->window, use->game.hud.pause.sprite, \
        NULL);
    } else {
        use->game.hud.pause.rect.width = 1920;
        sfSprite_setTextureRect(use->game.hud.pause.sprite, \
        use->game.hud.pause.rect);
    }
}