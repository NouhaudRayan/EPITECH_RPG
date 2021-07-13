/*
** EPITECH PROJECT, 2021
** game
** File description:
** animation_arrow_fight
*/

#include "function.h"

void action_on_animation_arrow_fight(rpg *use)
{
    if (use->game.fight.pop_arrow.boolean == 0) {
        use->game.fight.arrow.rect.left += 1920;
        if (use->game.fight.arrow.rect.left > 1920 && \
        use->game.fight.arrow.boolean == 1)
            use->game.fight.arrow.rect.left = 0;
        if (use->game.fight.arrow.rect.left > 5760 && \
        use->game.fight.arrow.boolean == 2)
            use->game.fight.arrow.rect.left = 3840;
    } else {
        use->game.fight.pop_arrow.rect.left += 1920;
        if (use->game.fight.pop_arrow.rect.left > 1920 && \
        use->game.fight.pop_arrow.boolean == 1)
            use->game.fight.pop_arrow.rect.left = 0;
        if (use->game.fight.pop_arrow.rect.left > 5760 && \
        use->game.fight.pop_arrow.boolean == 2)
            use->game.fight.pop_arrow.rect.left = 3840;
        if (use->game.fight.pop_arrow.rect.left > 9600 && \
        use->game.fight.pop_arrow.boolean == 3)
            use->game.fight.pop_arrow.rect.left = 7680;
    }
    sfClock_restart(use->game.fight.back.clock.clock);
}

void animation_arrow_fight(rpg *use)
{
    use->game.fight.back.clock.time = sfClock_getElapsedTime\
    (use->game.fight.back.clock.clock);
    use->game.fight.back.clock.seconds = \
    use->game.fight.back.clock.time.microseconds / 1000000.0;
    if (use->game.fight.back.clock.seconds > 0.25)
        action_on_animation_arrow_fight(use);
    sfSprite_setTextureRect(use->game.fight.arrow.sprite, \
    use->game.fight.arrow.rect);
    sfSprite_setTextureRect(use->game.fight.pop_arrow.sprite, \
    use->game.fight.pop_arrow.rect);
}