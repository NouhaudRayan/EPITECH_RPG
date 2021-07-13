/*
** EPITECH PROJECT, 2021
** final
** File description:
** display_change_attack
*/

#include "function.h"

void display_change_attack(rpg *use)
{
    sfRenderWindow_drawSprite(use->window, use->game.inventory.attack.back.sprite, NULL);
    sfRenderWindow_drawText(use->window, use->game.inventory.attack.actual_one.name.text, NULL);
    sfRenderWindow_drawText(use->window, use->game.inventory.attack.actual_one.damage.text, NULL);
    sfRenderWindow_drawText(use->window, use->game.inventory.attack.actual_one.pp.text, NULL);
    sfRenderWindow_drawText(use->window, use->game.inventory.attack.actual_two.name.text, NULL);
    sfRenderWindow_drawText(use->window, use->game.inventory.attack.actual_two.damage.text, NULL);
    sfRenderWindow_drawText(use->window, use->game.inventory.attack.actual_two.pp.text, NULL);
    sfRenderWindow_drawText(use->window, use->game.inventory.attack.futur.name.text, NULL);
    sfRenderWindow_drawText(use->window, use->game.inventory.attack.futur.damage.text, NULL);
    sfRenderWindow_drawText(use->window, use->game.inventory.attack.futur.pp.text, NULL);
}