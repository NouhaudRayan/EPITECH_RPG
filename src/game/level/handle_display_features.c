/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_display_features
*/

#include "function.h"

void handle_display_features(rpg *use)
{
    if (use->game.mini.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->game.mini.sprite, NULL);
}