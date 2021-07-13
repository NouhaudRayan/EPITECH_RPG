/*
** EPITECH PROJECT, 2021
** anim blurry
** File description:
** animation_blurry
*/

#include "function.h"

void animation_blurry(rpg *use)
{
    use->menu.blurry.clock.time = sfClock_getElapsedTime(use->menu.blurry.clock.clock);
    use->menu.blurry.clock.seconds = use->menu.blurry.clock.time.microseconds / 1000000.0;
    if (use->menu.blurry.clock.seconds > 0.1) {
        use->menu.blurry.rect.left += 1920;
        if (use->menu.blurry.rect.left >= 11520) {
            use->menu.blurry.rect.left = 0;
            use->menu.blurry.rect.top += 1080;
        }
        if (use->menu.blurry.rect.left >= 0 && use->menu.blurry.rect.top >= 7800) {
            use->menu.blurry.rect.left = 0;
            use->menu.blurry.rect.top = 0;
        }
        sfClock_restart(use->menu.blurry.clock.clock);
    }
    sfSprite_setTextureRect(use->menu.blurry.sprite, use->menu.blurry.rect);
    sfRenderWindow_drawSprite(use->window, use->menu.blurry.sprite, NULL);
}