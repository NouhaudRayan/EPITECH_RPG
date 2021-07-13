/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_move_hud
*/

#include "function.h"

void move_hud_two(rpg *use)
{
    sfSprite_setPosition(use->game.mini.sprite, use->game.mini.pos);
    sfSprite_setPosition(use->game.hud.hud.sprite, \
    use->game.hud.hud.pos);
    sfSprite_setPosition(use->game.hud.pause.sprite, \
    use->game.hud.pause.pos);
    sfSprite_setPosition(use->game.hud.life.sprite, \
    use->game.hud.life.pos);
    sfSprite_setPosition(use->game.hud.xp.sprite, \
    use->game.hud.xp.pos);
    sfSprite_setPosition(use->game.hud.shield.sprite, \
    use->game.hud.shield.pos);
    sfSprite_setPosition(use->game.background.sprite, \
    use->game.background.pos);
    sfSprite_setPosition(use->game.hud.model.sprite, use->game.hud.model.pos);
    sfText_setPosition(use->game.hud.pseudo.text, use->game.hud.pseudo.pos);
    sfText_setPosition(use->game.hud.gold.text, use->game.hud.gold.pos);
    sfText_setPosition(use->game.hud.level_nb.text, use->game.hud.level_nb.pos);
    sfText_setPosition(use->game.hud.level.text, use->game.hud.level.pos);
}

void move_hud(rpg *use, int x, int y)
{
    sfText_setString(use->game.hud.gold.text, my_getstr(use->gold));
    use->game.mini.pos.x += x;
    use->game.hud.level_nb.pos.x += x;
    use->game.hud.level_nb.pos.y += y;
    use->game.hud.level.pos.x += x;
    use->game.hud.level.pos.y += y;
    use->game.mini.pos.y += y;
    use->game.hud.hud.pos.x += x;
    use->game.hud.hud.pos.y += y;
    use->game.hud.life.pos.x += x;
    use->game.hud.life.pos.y += y;
    use->game.hud.xp.pos.x += x;
    use->game.hud.xp.pos.y += y;
    use->game.hud.shield.pos.x += x;
    use->game.hud.shield.pos.y += y;
    use->game.background.pos.x += x;
    use->game.background.pos.y += y;
    use->game.hud.pause.pos.x += x;
    use->game.hud.pause.pos.y += y;
    use->game.hud.model.pos.x += x;
    use->game.hud.model.pos.y += y;
    use->game.hud.pseudo.pos.x += x;
    use->game.hud.pseudo.pos.y += y;
    use->game.hud.gold.pos.x += x;
    use->game.hud.gold.pos.y += y;
    move_hud_two(use);
}