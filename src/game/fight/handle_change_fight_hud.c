/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_change_fight_hud
*/

#include "function.h"

void handle_change_fight_hud(rpg *use)
{
    sfText_setString(use->game.fight.pp_1.text, \
    my_getstr(use->player.attack_one.pp));
    sfText_setString(use->game.fight.pp_2.text, \
    my_getstr(use->player.attack_two.pp));
    use->game.hud.life.rect.width = use->player.life * 4;
    use->game.hud.shield.rect.width = use->player.shield * 3;
    use->game.hud.xp.rect.width = use->player.xp * 2;
    sfSprite_setTextureRect(use->game.hud.life.sprite, \
    use->game.hud.life.rect);
    sfSprite_setTextureRect(use->game.hud.shield.sprite, \
    use->game.hud.shield.rect);
    sfSprite_setTextureRect(use->game.hud.xp.sprite, \
    use->game.hud.xp.rect);
}