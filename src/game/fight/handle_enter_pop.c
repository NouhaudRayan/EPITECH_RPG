/*
** EPITECH PROJECT, 2021
** game
** File description:
** handle_enter_pop
*/

#include "function.h"

int handle_enter_pop(rpg *use)
{
    if (use->game.fight.pop_arrow.boolean == 1 && use->event.key.code == \
    sfKeyEnter && use->event.type == sfEvtKeyReleased) {
        sfSound_play(use->music.effect.sound);
        if (use->player.attack_one.pp > 0) {
            if (player_turn(use, 1) == 1)
                return (1);
            if (ennemi_turn(use) == 1)
                return (1);
        } else {
            use->game.fight.to_order = "You not have enouht PP.";
            sfText_setString(use->game.fight.order.text, use->game.fight.to_order);
        }
    }
    if (use->game.fight.pop_arrow.boolean == 2 && use->event.key.code == \
    sfKeyEnter && use->event.type == sfEvtKeyReleased) {
        sfSound_play(use->music.effect.sound);
        if (use->player.attack_two.pp > 0) {
            if (player_turn(use, 2) == 1)
                return (1);
            if (ennemi_turn(use) == 1)
                return (1);
        } else {
            use->game.fight.to_order = "You not have enouht PP.";
            sfText_setString(use->game.fight.order.text, use->game.fight.to_order);
        }
    }
    if (use->game.fight.pop_arrow.boolean == 3 && use->event.key.code == \
    sfKeyEnter && use->event.type == sfEvtKeyReleased)
        use->game.fight.pop_arrow.boolean = 0;
    return (0);
}