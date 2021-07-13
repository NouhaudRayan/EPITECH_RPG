/*
** EPITECH PROJECT, 2021
** round load anim
** File description:
** round_load_anime
*/

#include "function.h"

void round_load_anime(rpg *use)
{
    use->load.round.clock.time = sfClock_getElapsedTime(use->load.round.clock.clock);
    use->load.round.clock.seconds =  use->load.round.clock.time.microseconds / 1000000.0;
    if (use->load.round.clock.seconds > 0.01) {
        use->load.round.rect.left += 100;
        if (use->load.round.rect.left >= 2800)
            use->load.round.rect.left = 0;
        sfClock_restart(use->load.round.clock.clock);
    }
    sfSprite_setTextureRect(use->load.round.sprite, use->load.round.rect);

}