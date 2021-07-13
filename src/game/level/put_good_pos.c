/*
** EPITECH PROJECT, 2021
** final
** File description:
** put_good_pos
*/

#include "function.h"

void put_good_pos_three(rpg *use)
{
    sfSprite_setPosition(use->game.fight.ennemi.sprite, \
    use->game.fight.ennemi.pos);
    sfText_setPosition(use->game.fight.order.text, \
    use->game.fight.order.pos);
    sfText_setPosition(use->game.fight.pp_1.text, \
    use->game.fight.pp_1.pos);
    sfText_setPosition(use->game.fight.pp_2.text, \
    use->game.fight.pp_2.pos);
    sfText_setPosition(use->game.fight.dmg_1.text, \
    use->game.fight.dmg_1.pos);
    sfText_setPosition(use->game.fight.dmg_2.text, \
    use->game.fight.dmg_2.pos);
    sfText_setPosition(use->game.fight.attack1.text, \
    use->game.fight.attack1.pos);
    sfText_setPosition(use->game.fight.attack2.text, \
    use->game.fight.attack2.pos);
    sfText_setString(use->game.fight.attack1.text, use->player.attack_one.name);
    sfText_setString(use->game.fight.attack2.text, use->player.attack_two.name);
    sfText_setString(use->game.fight.dmg_1.text, my_getstr(use->player.attack_one.damage));
    sfText_setString(use->game.fight.dmg_2.text, my_getstr(use->player.attack_two.damage));
    sfText_setString(use->game.fight.pp_1.text, my_getstr(use->player.attack_one.pp));
    sfText_setString(use->game.fight.pp_2.text, my_getstr(use->player.attack_two.pp));
}

void put_good_pos_two(rpg *use)
{
    use->game.fight.dmg_1.pos = position((use->player.pos.x - 960) + 750, \
    (use->player.pos.y - 540) + 800);
    use->game.fight.dmg_2.pos = position((use->player.pos.x - 960) + 750, \
    (use->player.pos.y - 540) + 900);
    use->game.fight.attack1.pos = position((use->player.pos.x - 960) + 500, \
    (use->player.pos.y - 540) + 800);
    use->game.fight.attack2.pos = position((use->player.pos.x - 960) + 500, \
    (use->player.pos.y - 540) + 900);
    sfSprite_setPosition(use->game.fight.back.sprite, \
    use->game.fight.back.pos);
    sfSprite_setPosition(use->game.fight.pop_up.sprite, \
    use->game.fight.pop_up.pos);
    sfSprite_setPosition(use->game.fight.arrow.sprite, \
    use->game.fight.arrow.pos);
    sfSprite_setPosition(use->game.fight.pop_arrow.sprite, \
    use->game.fight.pop_arrow.pos);
    sfSprite_setPosition(use->game.fight.player.sprite, \
    use->game.fight.player.pos);
    put_good_pos_three(use);
}

void put_good_pos(rpg *use)
{
    use->game.fight.back.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.fight.pop_up.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.fight.arrow.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.fight.pop_arrow.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.fight.player.pos = position((use->player.pos.x - 960) + 320, \
    (use->player.pos.y - 540) + 400);
    sfSprite_setScale(use->game.fight.player.sprite, position(5, 5));
    if (atoi(use->files.fight[20]) == 85 || atoi(use->files.fight[20]) == 86) {
        use->game.fight.ennemi.pos = position((use->player.pos.x - 960) + 1320, \
        (use->player.pos.y - 540) + 400);
    } else {
        use->game.fight.ennemi.pos = position((use->player.pos.x - 960) + 1320, \
        (use->player.pos.y - 540) + 600);
    }
    use->game.fight.order.pos = position((use->player.pos.x - 960) + 1300, \
    (use->player.pos.y - 540) + 800);
    use->game.fight.pp_1.pos = position((use->player.pos.x - 960) + 950, \
    (use->player.pos.y - 540) + 800);
    use->game.fight.pp_2.pos = position((use->player.pos.x - 960) + 950, \
    (use->player.pos.y - 540) + 900);
    put_good_pos_two(use);
}