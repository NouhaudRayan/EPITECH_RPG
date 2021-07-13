/*
** EPITECH PROJECT, 2021
** animation playerchoice
** File description:
** animation_playerchoice
*/

#include "function.h"

void animation_playerchoice(rpg *use)
{
    use->menu.choose.iron.clock.time = sfClock_getElapsedTime(use->menu.choose.iron.clock.clock);
    use->menu.choose.iron.clock.seconds = use->menu.choose.iron.clock.time.microseconds / 1000000.0;
    if (use->menu.choose.iron.clock.seconds > 0.1) {
        use->menu.choose.iron.rect.left += 308;
        use->menu.choose.capt.rect.left += 308;
        use->menu.choose.thor.rect.left += 308;
        if (use->menu.choose.iron.rect.left >= 1848) {
            use->menu.choose.iron.rect.left = 0;
            use->menu.choose.capt.rect.left = 0;
            use->menu.choose.thor.rect.left = 0;
            use->menu.choose.iron.rect.top += 471;
            use->menu.choose.capt.rect.top += 471;
            use->menu.choose.thor.rect.top += 471;
        }
        if(use->menu.choose.iron.rect.top >= 3297) {
            use->menu.choose.iron.rect.top = 0;
            use->menu.choose.capt.rect.top = 0;
            use->menu.choose.thor.rect.top = 0;
        }
        sfClock_restart(use->menu.choose.iron.clock.clock);
    }
    sfSprite_setTextureRect(use->menu.choose.iron.sprite, use->menu.choose.iron.rect);
    sfSprite_setTextureRect(use->menu.choose.capt.sprite, use->menu.choose.capt.rect);
    sfSprite_setTextureRect(use->menu.choose.thor.sprite, use->menu.choose.thor.rect);
    sfRenderWindow_drawSprite(use->window, use->menu.choose.iron.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->menu.choose.capt.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->menu.choose.thor.sprite, NULL);
}