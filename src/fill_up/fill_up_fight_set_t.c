/*
** EPITECH PROJECT, 2021
** final
** File description:
** fill_up_fight_set_t
*/

#include "function.h"

void fight_display_set_t(rpg *use)
{
    use->game.fight.to_order = "Choose an action";
    text_set(&use->game.fight.order, use->game.fight.to_order, \
    position(1300, 800), colors(255, 255, 255), 30);
    text_set(&use->game.fight.pp_1, my_getstr(use->player.attack_one.pp), \
    position(850, 800), colors(255, 255, 255), 40);
    text_set(&use->game.fight.pp_2, my_getstr(use->player.attack_two.pp), \
    position(850, 900), colors(255, 255, 255), 40);
    text_set(&use->game.fight.dmg_1, my_getstr(use->player.attack_one.damage),\
    position(950, 800), colors(255, 255, 255), 40);
    text_set(&use->game.fight.dmg_2, my_getstr(use->player.attack_two.damage),\
    position(950, 900), colors(255, 255, 255), 40);
    text_set(&use->game.fight.attack1, use->player.attack_two.name, position(0, 0), colors(255, 255, 255), 40);
    text_set(&use->game.fight.attack2, use->player.attack_two.name, position(0, 0), colors(255, 255, 255), 40);
    background_set(&use->game.fight.dead_screen, "sprites/hud/fight/died.png", dimension(0, 0, 1920, 1080), position(6780, 17910));
    button_set(&use->game.fight.button_exit, "sprites/hud/fight/quit_game_dead.png", dimension(0, 0, 1920, 1080), position(6780, 17910));
    button_set(&use->game.fight.button_menu, "sprites/hud/fight/return_menu_dead.png", dimension(0, 0, 1920, 1080), position(6780, 17910));
}

void fill_up_fight_set_t(rpg *use)
{
    use->game.fight.boolean = 0;
    background_set(&use->game.fight.back, "sprites/hud/fight/background.png", \
    dimension(0, 0, 1920, 1080), position(0, 0));
    background_set(&use->game.fight.pop_up, "sprites/hud/fight/popy-up.png", \
    dimension(0, 0, 1920, 1080), position(0, 0));
    button_set(&use->game.fight.arrow, "sprites/hud/fight/fleche_select.png", \
    dimension(0, 0, 1920, 1080), position(0, 0));
    button_set(&use->game.fight.pop_arrow, "sprites/hud/fight/fleche-pop.png",\
    dimension(0, 0, 1920, 1080), position(0, 0));
    button_set(&use->game.fight.player, "sprites/personnage/game/thor.png", \
    dimension(45, 150, 45, 50), position(320, 400));
    button_set(&use->game.fight.ennemi, \
    "sprites/personnage/level/ennemi_1.png", \
    dimension(45, 48, 45, 48), position(1320, 400));
    sfSprite_setScale(use->game.fight.player.sprite, position(5, 5));
    sfSprite_setScale(use->game.fight.ennemi.sprite, position(5, 5));
    use->game.fight.arrow.boolean = 1;
    fight_display_set_t(use);
}