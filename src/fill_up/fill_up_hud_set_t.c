/*
** EPITECH PROJECT, 2021
** final
** File description:
** fill_up_hud_set_t
*/

#include "function.h"

void fill_up_hud_set_t(rpg *use)
{
    background_set(&use->game.hud.hud, "sprites/hud/game/hud.png", \
    dimension(0, 0, 1920, 1080), position(6780, 17910));
    button_set(&use->game.hud.life, "sprites/hud/game/life_barre.png", \
    dimension(0, 0, 400, 32), position(6934, 17995));
    button_set(&use->game.hud.shield, "sprites/hud/game/shield_barre.png", \
    dimension(0, 0, 324, 31), position(6934, 18036));
    button_set(&use->game.hud.xp, "sprites/hud/game/xp_barre.png", \
    dimension(0, 0, 215, 9), position(6934, 18075));
    button_set(&use->game.hud.pause, "sprites/hud/game/pause_button.png", \
    dimension(0, 0, 3840, 1080), position(6780, 17910));
    use->game.hud.clock = clock_set(use->game.hud.clock);
    background_set(&use->game.hud.action, "sprites/hud/game/press_e.png", \
    dimension(0, 0, 1131, 81), position(7175, 18860));
    button_set(&use->game.hud.model, "sprites/personnage/game/thor.png", \
    dimension(0, 0, 45, 50), position(6830, 17960));
    text_set(&use->game.hud.pseudo, "salut", position(6780 + 150, 17910 + 30), colors(255, 255, 255), 30);
    text_set(&use->game.hud.gold, my_getstr(use->gold), position(6780 + 500, 17910 + 30), colors(255, 155, 0), 30);
    text_set(&use->game.hud.level, "Level", position(6780 + 150, 17910 + 200), colors(255, 255, 255), 25);
    text_set(&use->game.hud.level_nb, my_getstr(use->player.level), position(6780 + 350, 17910 + 200), colors(255, 255, 255), 25);
    use->game.hud.clock = clock_set(use->game.hud.clock);
}