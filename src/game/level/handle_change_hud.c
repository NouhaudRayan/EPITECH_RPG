/*
** EPITECH PROJECT, 2021
** game
** File description:
** handle_change_hud
*/

#include "function.h"

void handle_change_hud(rpg *use)
{
    if (use->player.life > 100)
        use->player.life = 100;
    if (use->player.xp >= 100) {
        use->player.level += 1;
        use->player.xp = 1;
        sfText_setString(use->game.hud.level_nb.text, my_getstr(use->player.level));
    }
    if (use->player.shield > 100)
        use->player.shield = 100;
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