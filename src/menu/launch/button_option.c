/*
** EPITECH PROJECT, 2021
** button option
** File description:
** button_option
*/

#include "function.h"

int button_options(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 520 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 919 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 715 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 836 &&
    use->event.type == sfEvtMouseButtonPressed) {
        sfSound_play(use->music.effect.sound);
        if (use->menu.launch.settings.rect.left != 1920) {
            use->menu.launch.settings.rect.left += 1920;
            sfSprite_setTextureRect(use->menu.launch.settings.sprite, use->menu.launch.settings.rect);
        }
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 520 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 919 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 715 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 836 &&
    use->event.type == sfEvtMouseButtonReleased) {
        use->menu.launch.settings.rect.left = 0;
        sfSprite_setTextureRect(use->menu.launch.settings.sprite, use->menu.launch.settings.rect);
        use->menu.set.boolean = 1;
        use->menu.launch.boolean = 0;
        return (1);
    }
    return (0);
}