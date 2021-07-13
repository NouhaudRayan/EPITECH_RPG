/*
** EPITECH PROJECT, 2021
** final
** File description:
** fill_up_change_attaque_set_t
*/

#include "function.h"

void fill_up_text_attaque_set_t(rpg *use)
{
    text_set(&use->game.inventory.one.name, \
    use->player.attack_one.name, position(7897, 18276), \
    colors(255, 255, 255), 40);
    text_set(&use->game.inventory.one.damage, \
    my_getstr(use->player.attack_one.damage), position(7937, 18323), \
    colors(255, 255, 255), 40);
    text_set(&use->game.inventory.one.pp, 
    my_getstr(use->player.attack_one.pp), position(8109, 18323), \
    colors(255, 255, 255), 40);
    text_set(&use->game.inventory.two.name, \
    use->player.attack_two.name, position(7897, 18485), \
    colors(255, 255, 255), 40);
    text_set(&use->game.inventory.two.damage, \
    my_getstr(use->player.attack_two.damage), position(7937, 18532), \
    colors(255, 255, 255), 40);
    text_set(&use->game.inventory.two.pp, \
    my_getstr(use->player.attack_two.pp), position(8109, 18532), \
    colors(255, 255, 255), 40);
}