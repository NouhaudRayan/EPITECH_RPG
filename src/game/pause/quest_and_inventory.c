/*
** EPITECH PROJECT, 2021
** quest and inventory
** File description:
** sous fonction
*/

#include "function.h"

void quest_and_inventory(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 485 && sfMouse_getPositionRenderWindow(use->window).x <= 680 && sfMouse_getPositionRenderWindow(use->window).y >= 70 && sfMouse_getPositionRenderWindow(use->window).y <= 150)
    {
        use->game.pause.red_barre.rect.left = 0;
        sfSprite_setTextureRect(use->game.pause.red_barre.sprite, use->game.pause.red_barre.rect);
        sfRenderWindow_drawSprite(use->window, use->game.pause.red_barre.sprite, NULL);
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 680 && sfMouse_getPositionRenderWindow(use->window).x <= 920 && sfMouse_getPositionRenderWindow(use->window).y >= 70 && sfMouse_getPositionRenderWindow(use->window).y <= 150)
    {
        use->game.pause.red_barre.rect.left = 1920;
        sfSprite_setTextureRect(use->game.pause.red_barre.sprite, use->game.pause.red_barre.rect);
        sfRenderWindow_drawSprite(use->window, use->game.pause.red_barre.sprite, NULL);
    }
}