/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_final_choice
*/

#include "function.h"

void handle_final_choice(rpg *use)
{
    if (use->menu.choose.captaine_america.boolean == 1) {
        use->files.player[1] = "sprites/personnage/game/captain_america.png";
        use->files.player[13] = "ShieldSpear";
        use->files.player[11] = "KneeKick";
        use->player = player_set(use, use->player);
        fill_up_text_attaque_set_t(use);
        button_set(&use->game.hud.model, "sprites/personnage/game/captain_america.png", dimension(45, 0, 45, 50), position(6810, 17980));
        sfSprite_setScale(use->game.hud.model.sprite, position(2, 2));
    }
    if (use->menu.choose.iron_man.boolean == 1) {
        use->files.player[1] = "sprites/personnage/game/ironman.png";
        use->files.player[13] = "Laser";
        use->player = player_set(use, use->player);
        fill_up_text_attaque_set_t(use);
        button_set(&use->game.hud.model, "sprites/personnage/game/ironman.png", dimension(45, 0, 45, 50), position(6830, 17960));
        sfSprite_setScale(use->game.hud.model.sprite, position(2, 2));
    }
    if (use->menu.choose.the_thor.boolean == 1) {
        use->files.player[1] = "sprites/personnage/game/thor.png";
        use->files.player[13] = "Hammer";
        use->player = player_set(use, use->player);
        fill_up_text_attaque_set_t(use);
        button_set(&use->game.hud.model, "sprites/personnage/game/thor.png", dimension(45, 0, 45, 50), position(6830, 17960));
        sfSprite_setScale(use->game.hud.model.sprite, position(2, 2));
    }
}