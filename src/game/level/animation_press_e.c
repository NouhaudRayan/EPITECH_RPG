/*
** EPITECH PROJECT, 2021
** game
** File description:
** animation_press_e
*/

#include "function.h"

void animation_press_e(rpg *use)
{
    use->game.space.interact.clock.time = \
    sfClock_getElapsedTime(use->game.space.interact.clock.clock);
    use->game.space.interact.clock.seconds = \
    use->game.space.interact.clock.time.microseconds / 1000000.0;
    if (use->game.space.interact.clock.seconds > 0.5) {
        use->game.space.interact.rect.left += 1131;
        if (use->game.space.interact.rect.left > 1131)
            use->game.space.interact.rect.left = 0;
        sfClock_restart(use->game.space.interact.clock.clock);
    }
    sfSprite_setTextureRect(use->game.space.interact.sprite, \
    use->game.space.interact.rect);
    sfRenderWindow_drawSprite(use->window, use->game.space.interact.sprite, \
    NULL);
}