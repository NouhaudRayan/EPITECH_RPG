/*
** EPITECH PROJECT, 2021
** final
** File description:
** animation_left
*/

#include "function.h"

void animation_left(rpg *use)
{
    use->menu.launch.hud.clock.time = sfClock_getElapsedTime(use->menu.launch.hud.clock.clock);
    use->menu.launch.hud.clock.seconds = use->menu.launch.hud.clock.time.microseconds / 1000000.0;
    if (use->menu.launch.hud.clock.seconds > 0.0001) {
        use->menu.launch.hud.rect.left -= 20;
        sfClock_restart(use->menu.launch.hud.clock.clock);
    }
    sfSprite_setTextureRect(use->menu.launch.hud.sprite, use->menu.launch.hud.rect);
    sfRenderWindow_drawSprite(use->window, use->menu.launch.hud.sprite, NULL);
}