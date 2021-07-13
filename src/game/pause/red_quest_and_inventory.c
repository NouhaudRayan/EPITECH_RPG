/*
** EPITECH PROJECT, 2021
** quest_and_inventory_red
** File description:
** sous fonction
*/

#include "function.h"

void quest_and_inventory_red(rpg *use)
{
    if (use->game.pause.quest.boolean == 1)
    {
        use->game.pause.barre.rect.left = 0;
        sfSprite_setTextureRect(use->game.pause.barre.sprite, use->game.pause.barre.rect);
        sfRenderWindow_drawSprite(use->window, use->game.pause.barre.sprite, NULL);
    }
    if (use->game.pause.inventory.boolean == 1)
    {
        use->game.pause.barre.rect.left = 1920;
        sfSprite_setTextureRect(use->game.pause.barre.sprite, use->game.pause.barre.rect);
        sfRenderWindow_drawSprite(use->window, use->game.pause.barre.sprite, NULL);
    }
}