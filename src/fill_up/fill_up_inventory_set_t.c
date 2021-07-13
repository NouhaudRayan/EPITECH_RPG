/*
** EPITECH PROJECT, 2021
** final
** File description:
** fill_up_inventory_set_t
*/

#include "function.h"

void fill_up_inventory_set_t(rpg *use)
{
    use->game.inventory.act_1 = 0;
    use->game.inventory.act_2 = 0;
    use->game.inventory.act_3 = 0;
    use->game.inventory.act_4 = 0;
    use->game.inventory.act_5 = 0;
    use->game.inventory.boolean = 0;
    background_set(&use->game.inventory.back, \
    "sprites/hud/inventory/inventory.png", dimension(0, 0, 1920, 1080), \
    position(6780, 17910));
    button_set(&use->game.inventory.potion_one, "sprites/hud/inventory/potion_vie.png", dimension(0, 0, 100, 100), position(6780, 17910));
    button_set(&use->game.inventory.potion_two, "sprites/hud/inventory/potion_vie.png", dimension(0, 0, 100, 100), position(6780, 17910));
    button_set(&use->game.inventory.potion_three, "sprites/hud/inventory/potion_vie.png", dimension(0, 0, 100, 100), position(6780, 17910));
    button_set(&use->game.inventory.potion_four, "sprites/hud/inventory/potion_vie.png", dimension(0, 0, 100, 100), position(6780, 17910));
    button_set(&use->game.inventory.potion_five, "sprites/hud/inventory/potion_vie.png", dimension(0, 0, 100, 100), position(6780, 17910));
    button_set(&use->game.inventory.chesplate, "sprites/hud/inventory/chestplate_rare.png", dimension(0, 0, 100, 100), position(6780, 17910));
    button_set(&use->game.inventory.helmet, "sprites/hud/inventory/helmet_rare.png", dimension(0, 0, 100, 100), position(6780, 17910));
    background_set(&use->game.inventory.action, "sprites/hud/inventory/action.png", dimension(0, 0, 1920, 1080), position(0, 0));
    fill_up_text_attaque_set_t(use);
    fill_up_change_set_t(use);
}