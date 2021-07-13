/*
** EPITECH PROJECT, 2021
** game
** File description:
** handle_arrow_pop
*/

#include "function.h"

void handle_arrow_pop_three(rpg *use)
{
    if (use->game.fight.pop_arrow.boolean == 2 && use->event.key.code == \
    atoi(use->files.touch[1]) && use->event.type == sfEvtKeyReleased) {
        sfSound_play(use->music.effect.sound);
        use->game.fight.pop_arrow.rect.left = 0;
        sfSprite_setTextureRect(use->game.fight.pop_arrow.sprite, \
        use->game.fight.pop_arrow.rect);
        use->game.fight.pop_arrow.boolean = 1;
        return;
    }
    if (use->game.fight.pop_arrow.boolean == 3 && use->event.key.code == \
    atoi(use->files.touch[3]) && use->event.type == sfEvtKeyReleased) {
        sfSound_play(use->music.effect.sound);
        use->game.fight.pop_arrow.rect.left = 0;
        sfSprite_setTextureRect(use->game.fight.pop_arrow.sprite, \
        use->game.fight.pop_arrow.rect);
        use->game.fight.pop_arrow.boolean = 1;
        return;
    }
}

void handle_arrow_pop_two(rpg *use)
{
    if (use->game.fight.pop_arrow.boolean == 2 && use->event.key.code == \
    atoi(use->files.touch[3]) && use->event.type == sfEvtKeyReleased) {
        sfSound_play(use->music.effect.sound);
        use->game.fight.pop_arrow.rect.left = 7680;
        sfSprite_setTextureRect(use->game.fight.pop_arrow.sprite, \
        use->game.fight.pop_arrow.rect);
        use->game.fight.pop_arrow.boolean = 3;
        return;
    }
    if (use->game.fight.pop_arrow.boolean == 3 && use->event.key.code == \
    atoi(use->files.touch[1]) && use->event.type == sfEvtKeyReleased) {
        sfSound_play(use->music.effect.sound);
        use->game.fight.pop_arrow.rect.left = 3840;
        sfSprite_setTextureRect(use->game.fight.pop_arrow.sprite, \
        use->game.fight.pop_arrow.rect);
        use->game.fight.pop_arrow.boolean = 2;
        return;
    }
    handle_arrow_pop_three(use);
}

void handle_arrow_pop(rpg *use)
{
    if (use->game.fight.pop_arrow.boolean == 1 && use->event.key.code == \
    atoi(use->files.touch[3]) && use->event.type == sfEvtKeyReleased) {
        sfSound_play(use->music.effect.sound);
        use->game.fight.pop_arrow.rect.left = 3840;
        sfSprite_setTextureRect(use->game.fight.pop_arrow.sprite, \
        use->game.fight.pop_arrow.rect);
        use->game.fight.pop_arrow.boolean = 2;
        return;
    }
    if (use->game.fight.pop_arrow.boolean == 1 && use->event.key.code == \
    atoi(use->files.touch[1]) && use->event.type == sfEvtKeyReleased) {
        sfSound_play(use->music.effect.sound);
        use->game.fight.pop_arrow.rect.left = 7680;
        sfSprite_setTextureRect(use->game.fight.pop_arrow.sprite, \
        use->game.fight.pop_arrow.rect);
        use->game.fight.pop_arrow.boolean = 3;
        return;
    }
    handle_arrow_pop_two(use);
}