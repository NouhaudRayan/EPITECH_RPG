/*
** EPITECH PROJECT, 2021
** button exit
** File description:
** button_exit
*/

#include "function.h"

int button_exit(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1000 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1400 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 715 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 836
    && use->event.type == sfEvtMouseButtonPressed) {
        sfSound_play(use->music.effect.sound);
        if (use->menu.launch.exit.rect.left != 1920) {
            use->menu.launch.exit.rect.left += 1920;
            sfSprite_setTextureRect(use->menu.launch.exit.sprite, use->menu.launch.exit.rect);
        }
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1000 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1400 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 715 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 836
    && use->event.type == sfEvtMouseButtonReleased) {
        use->close = 1;
        use->menu.launch.close = 1;
        use->menu.launch.boolean = 0;
        return (1);
    }
    return (0);
}