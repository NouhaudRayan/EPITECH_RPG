/*
** EPITECH PROJECT, 2021
** handle chocie
** File description:
** handle_choice
*/

#include "function.h"

void handle_choice(rpg *use)
{
    if (use->menu.choose.captaine_america.boolean == 1 && use->event.key.code == sfKeyRight && use->event.type == sfEvtKeyReleased) {
        sfSound_play(use->music.effect.sound);
        use->menu.choose.captaine_america.boolean = 0;
        use->menu.choose.iron_man.boolean = 1;
    } else if (use->menu.choose.iron_man.boolean == 1 && use->event.key.code == sfKeyRight && use->event.type == sfEvtKeyReleased) {
        sfSound_play(use->music.effect.sound);
        use->menu.choose.iron_man.boolean = 0;
        use->menu.choose.the_thor.boolean = 1;
    }
    if (use->menu.choose.iron_man.boolean == 1 && use->event.key.code == sfKeyLeft && use->event.type == sfEvtKeyReleased) {
        sfSound_play(use->music.effect.sound);
        use->menu.choose.iron_man.boolean = 0;
        use->menu.choose.captaine_america.boolean = 1;
    }
    if (use->menu.choose.the_thor.boolean == 1 && use->event.key.code == sfKeyLeft && use->event.type == sfEvtKeyReleased) {
        sfSound_play(use->music.effect.sound);
        use->menu.choose.the_thor.boolean = 0;
        use->menu.choose.iron_man.boolean = 1;
    }
}