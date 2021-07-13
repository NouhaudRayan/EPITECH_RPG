/*
** EPITECH PROJECT, 2021
** game
** File description:
** handle_enter_popless
*/

#include "function.h"

void handle_enter_popless(rpg *use)
{
    if (use->game.fight.arrow.boolean == 2 && use->event.key.code == \
    sfKeyEnter && use->event.type == sfEvtKeyReleased) {
        if (atoi(use->files.fight[20]) < 84) {    
            sfSound_play(use->music.effect.sound);
            detect_ennemi(use);
            use->game.fight.boolean = 0;
            use->game.map.boolean = 1;
        } else {
            use->game.fight.to_order = "You can't escape a boss!";
            sfText_setString(use->game.fight.order.text, use->game.fight.to_order);
        }
    }
    if (use->game.fight.arrow.boolean == 1 && use->event.key.code == \
    sfKeyEnter && use->event.type == sfEvtKeyReleased) {
        sfSound_play(use->music.effect.sound);
        use->game.fight.pop_arrow.boolean = 1;
    }
}