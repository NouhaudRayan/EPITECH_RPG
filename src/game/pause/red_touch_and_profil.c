/*
** EPITECH PROJECT, 2021
** touch and profil red
** File description:
** sous fonction
*/

#include "function.h"

void touch_and_profil_red(rpg *use)
{
    if (use->game.pause.touch.boolean == 1)
    {
        use->game.pause.barre.rect.left = 7680;
        sfSprite_setTextureRect(use->game.pause.barre.sprite, use->game.pause.barre.rect);
        sfRenderWindow_drawSprite(use->window, use->game.pause.barre.sprite, NULL);
    }
    if (use->game.pause.profil.boolean == 1)
    {
        use->game.pause.barre.rect.left = 9600;
        sfSprite_setTextureRect(use->game.pause.barre.sprite, use->game.pause.barre.rect);
        sfRenderWindow_drawSprite(use->window, use->game.pause.barre.sprite, NULL);
    }
}