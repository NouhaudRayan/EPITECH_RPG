/*
** EPITECH PROJECT, 2021
** anim intro
** File description:
** intro_animation
*/

#include "function.h"

void animation_intro(rpg *use)
{
    use->menu.intro.start.clock.time = sfClock_getElapsedTime(use->menu.intro.start.clock.clock);
    use->menu.intro.start.clock.seconds = use->menu.intro.start.clock.time.microseconds / 1000000.0;
    if (use->menu.intro.start.clock.seconds > 0.08) {
        if (use->menu.intro.start.rect.left >= 3840 && use->menu.intro.start.rect.top >= 9720) {
            use->menu.intro.end.rect.left += 1920;
            if (use->menu.intro.end.rect.left >= 11520) {
                use->menu.intro.end.rect.left = 0;
                use->menu.intro.end.rect.top += 1080;
            }
            if (use->menu.intro.end.rect.left >= 3840 && use->menu.intro.end.rect.top >= 12960) {
                sfSound_stop(use->music.intro.sound);
                sfSound_play(use->music.menu.sound);
                use->menu.intro.boolean = 0;
                use->menu.name.boolean = 1;
            }
        } else {
            use->menu.intro.start.rect.left += 1920;
            if (use->menu.intro.start.rect.left >= 11520) {
                use->menu.intro.start.rect.left = 0;
                use->menu.intro.start.rect.top += 1080;
            }
        }
        sfClock_restart(use->menu.intro.start.clock.clock);
    }
    sfSprite_setTextureRect(use->menu.intro.start.sprite, use->menu.intro.start.rect);
    sfSprite_setTextureRect(use->menu.intro.end.sprite, use->menu.intro.end.rect);
}