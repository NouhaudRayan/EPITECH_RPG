/*
** EPITECH PROJECT, 2021
** barre load anim
** File description:
** barre_load_anim
*/

#include "function.h"

void barre_load_anim(rpg *use)
{
    use->load.barre.clock.time = sfClock_getElapsedTime(use->load.barre.clock.clock);
    use->load.barre.clock.seconds =  use->load.barre.clock.time.microseconds / 1000000.0;
    if (use->load.barre.clock.seconds > 0.1) {
        use->load.barre.rect.width += 50;
        sfClock_restart(use->load.barre.clock.clock);
    }
    sfSprite_setTextureRect(use->load.barre.sprite, use->load.barre.rect);
}