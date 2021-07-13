/*
** EPITECH PROJECT, 2021
** red achievement and sound
** File description:
** sous fonction
*/

#include "function.h"

void achievement_and_sound_red(rpg *use)
{
    if (use->game.pause.achievement.boolean == 1)
    {
        use->game.pause.barre.rect.left = 3840;
        sfSprite_setTextureRect(use->game.pause.barre.sprite, use->game.pause.barre.rect);
        sfRenderWindow_drawSprite(use->window, use->game.pause.barre.sprite, NULL);
    }
    if (use->game.pause.sounds.boolean == 1)
    {
        use->game.pause.barre.rect.left = 5760;
        sfSprite_setTextureRect(use->game.pause.barre.sprite, use->game.pause.barre.rect);
        sfRenderWindow_drawSprite(use->window, use->game.pause.barre.sprite, NULL);
    }
}