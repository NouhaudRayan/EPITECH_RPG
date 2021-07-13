/*
** EPITECH PROJECT, 2021
** game
** File description:
** animation_player
*/

#include "function.h"

void animation_player(rpg *use, int i)
{
    use->player.clock.time = \
    sfClock_getElapsedTime(use->player.clock.clock);
    use->player.clock.seconds = \
    use->player.clock.time.microseconds / 1000000.0;
    if (use->player.clock.seconds > 0.1) {
        use->player.rect.top = i;
        use->player.rect.left += 45;
        use->game.player.dog.rect.top = i;
        use->game.player.dog.rect.left += 45;
        if (use->player.rect.left >= 135) {
            use->player.rect.left = 0;
            use->game.player.dog.rect.left = 0;
        }
        sfClock_restart(use->player.clock.clock);
    }
    sfSprite_setTextureRect(use->player.sprite, \
    use->player.rect);
    sfSprite_setTextureRect(use->game.player.dog.sprite, \
    use->game.player.dog.rect);
}