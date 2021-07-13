/*
** EPITECH PROJECT, 2021
** final
** File description:
** fill_up_game_set
*/

#include "function.h"

sfFloatRect dimensions(int x, int y, int a, int b)
{
    sfFloatRect rect;

    rect.left = x;
    rect.top = y;
    rect.width = a;
    rect.height = b;
    return (rect);
}

void fill_up_game_set_t(rpg *use)
{
    use->game.view = sfView_create();
    use->game.view = sfView_createFromRect(dimensions(0, 0, 1920, 1080));
    sfView_setSize(use->game.view, position(1920, 1080));
    sfView_setCenter(use->game.view, use->player.pos);
    fill_up_level_set_t(use);
    fill_up_inventory_set_t(use);
    fill_up_hud_set_t(use);
    fill_up_mini_set_t(use);
    fill_up_space_set_t(use);
    fill_up_fight_set_t(use);
    fill_up_pause_set_t(use);
}