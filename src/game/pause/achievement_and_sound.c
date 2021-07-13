/*
** EPITECH PROJECT, 2021
** achievement and sound
** File description:
** sous fonction
*/

#include "function.h"

void achievement_and_sound(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 920 && \
    sfMouse_getPositionRenderWindow(use->window).x <= 1200 && \
    sfMouse_getPositionRenderWindow(use->window).y >= 70 && \
    sfMouse_getPositionRenderWindow(use->window).y <= 150) {
        use->game.pause.red_barre.rect.left = 3840;
        sfSprite_setTextureRect(use->game.pause.red_barre.sprite, \
        use->game.pause.red_barre.rect);
        sfRenderWindow_drawSprite(use->window, \
        use->game.pause.red_barre.sprite, NULL);
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1200 && \
    sfMouse_getPositionRenderWindow(use->window).x <= 1400 && \
    sfMouse_getPositionRenderWindow(use->window).y >= 70 && \
    sfMouse_getPositionRenderWindow(use->window).y <= 150) {
        use->game.pause.red_barre.rect.left = 5760;
        sfSprite_setTextureRect(use->game.pause.red_barre.sprite, \
        use->game.pause.red_barre.rect);
        sfRenderWindow_drawSprite(use->window, \
        use->game.pause.red_barre.sprite, NULL);
    }
}