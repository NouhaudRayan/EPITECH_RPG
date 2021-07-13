/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_display_ennemi
*/

#include "function.h"

void handle_display_ennemi_two(rpg *use)
{
    if (use->game.player.ennemi->ennemi.moove == 2) {
        animation_ennemi_droite(use);
        use->game.player.ennemi->ennemi.rect.top = 100;
        sfSprite_setTextureRect(use->game.player.ennemi->ennemi.sprite, \
        use->game.player.ennemi->ennemi.rect);
    }
    if (use->game.player.ennemi->ennemi.moove == 3) {
        animation_ennemi_gauche(use);
        use->game.player.ennemi->ennemi.rect.top = 50;
        sfSprite_setTextureRect(use->game.player.ennemi->ennemi.sprite, \
        use->game.player.ennemi->ennemi.rect);
    }
}

void handle_display_ennemi(rpg *use)
{
    if (use->game.player.ennemi->ennemi.moove == 0) {
        animation_ennemi_bas(use);
        use->game.player.ennemi->ennemi.rect.top = 0;
        sfSprite_setTextureRect(use->game.player.ennemi->ennemi.sprite, \
        use->game.player.ennemi->ennemi.rect);
    }
    if (use->game.player.ennemi->ennemi.moove == 1) {
        animation_ennemi_haut(use);
        use->game.player.ennemi->ennemi.rect.top = 150;
        sfSprite_setTextureRect(use->game.player.ennemi->ennemi.sprite, \
        use->game.player.ennemi->ennemi.rect);
    }
    handle_display_ennemi_two(use);
}