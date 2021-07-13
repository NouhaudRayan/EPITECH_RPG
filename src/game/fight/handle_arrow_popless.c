/*
** EPITECH PROJECT, 2021
** game
** File description:
** handle_arrow_popless
*/

#include "function.h"

void handle_arrow_popless(rpg *use)
{
    if (use->game.fight.arrow.boolean == 1 && \
    ((use->event.key.code == atoi(use->files.touch[3]) || use->event.key.code == atoi(use->files.touch[1])) \
    && use->event.type == sfEvtKeyReleased)) {
        sfSound_play(use->music.effect.sound);
        use->game.fight.arrow.rect.left = 3840;
        sfSprite_setTextureRect(use->game.fight.arrow.sprite, \
        use->game.fight.arrow.rect);
        use->game.fight.arrow.boolean = 2;
        return;
    }
    if (use->game.fight.arrow.boolean == 2 && \
    ((use->event.key.code == atoi(use->files.touch[3]) || use->event.key.code == atoi(use->files.touch[1])) \
    && use->event.type == sfEvtKeyReleased)) {
        sfSound_play(use->music.effect.sound);
        use->game.fight.arrow.rect.top = 0;
        sfSprite_setTextureRect(use->game.fight.arrow.sprite, \
        use->game.fight.arrow.rect);
        use->game.fight.arrow.boolean = 1;
    }
}