/*
** EPITECH PROJECT, 2021
** final
** File description:
** my_game
*/

#include "function.h"

int my_game(rpg *use)
{
    while (use->game.map.boolean == 1 && my_level(use) == 0);
    while (use->game.fight.boolean == 1 && my_fight(use) == 0);
    while (use->game.inventory.boolean == 1 && my_inventory(use) == 0);
    while (use->game.space.boolean == 1 && my_space(use) == 0);
    while (use->game.pause.boolean == 1 && my_pause(use) == 0);
    while (use->game.shop.boolean == 1 && my_shop(use) == 0);
    return (0);
}