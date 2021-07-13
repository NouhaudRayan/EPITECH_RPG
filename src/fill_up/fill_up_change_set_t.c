/*
** EPITECH PROJECT, 2021
** final
** File description:
** fill_up_change_set_t
*/

#include "function.h"

void fill_up_change_set_t_two(rpg *use)
{
    text_set(&use->game.inventory.attack.actual_one.damage, \
    my_getstr(use->player.attack_one.damage), \
    position(6780 + 952, 17910 + 463), colors(255, 255, 255), 75);
    text_set(&use->game.inventory.attack.actual_one.pp, \
    my_getstr(use->player.attack_one.pp), position(6780 + 1300, 17910 + 463), \
    colors(255, 255, 255), 75);
    text_set(&use->game.inventory.attack.actual_two.name, \
    use->player.attack_two.name, position(6780 + 552, 17910 + 653), \
    colors(255, 255, 255), 75);
    text_set(&use->game.inventory.attack.actual_two.damage, \
    my_getstr(use->player.attack_two.damage), \
    position(6780 + 952, 17910 + 653), colors(255, 255, 255), 75);
    text_set(&use->game.inventory.attack.actual_two.pp, \
    my_getstr(use->player.attack_two.pp), position(6780 + 1300, 17910 + 653), \
    colors(255, 255, 255), 75);
    button_set(&use->game.inventory.attack.one, "sprites/hud/inventory/attack_case_haut.png", dimension(0, 0, 1920, 1080), position(0, 0));
    button_set(&use->game.inventory.attack.two, "sprites/hud/inventory/attack_case_bas.png", dimension(0, 0, 1920, 1080), position(0, 0));
    button_set(&use->game.inventory.armor.one, "sprites/hud/inventory/armor_case.png", dimension(0, 0, 1920, 1080), position(0, 0));
    text_set(&use->game.inventory.attack.futur.name, "salut", position(0, 0), colors(255, 255, 255), 75);
    text_set(&use->game.inventory.attack.futur.damage, "salut", position(0, 0), colors(255, 255, 255), 75);
    text_set(&use->game.inventory.attack.futur.pp, "salut", position(0, 0), colors(255, 255, 255), 75);
}

void fill_up_change_set_t(rpg *use)
{
    background_set(&use->game.inventory.attack.back, \
    "sprites/hud/inventory/change_attaque.png", dimension(0, 0, 1920, 1080), \
    position(6780, 17910));
    background_set(&use->game.inventory.armor.back, \
    "sprites/hud/inventory/change_armure.png", dimension(0, 0, 1920, 1080), \
    position(6780, 17910));
    button_set(&use->game.inventory.attack.annuler, \
    "sprites/hud/inventory/cancel_attack.png", dimension(0, 0, 1920, 1080), \
    position(6780, 17910));
    button_set(&use->game.inventory.armor.annuler, \
    "sprites/hud/inventory/cancel_armor.png", dimension(0, 0, 1920, 1080), \
    position(6780, 17910));
    text_set(&use->game.inventory.attack.actual_one.name, \
    use->player.attack_one.name, position(6780 + 552, 17910 + 463), \
    colors(255, 255, 255), 75);
    fill_up_change_set_t_two(use);
}