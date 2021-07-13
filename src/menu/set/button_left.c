/*
** EPITECH PROJECT, 2021
** final
** File description:
** button_left
*/

#include "function.h"

int button_left(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1665 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 1810 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 460 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 619 &&
        use->event.type == sfEvtMouseButtonPressed) {
            sfSound_play(use->music.effect.sound);
            if (use->menu.set.big_a.rect.left <= 0) {
                use->menu.set.big_a.rect.left += 1940;
                sfSprite_setTextureRect(use->menu.set.big_a.sprite, use->menu.set.big_a.rect);
            }
        }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1665 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 1810 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 460 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 619 &&
        use->event.type == sfEvtMouseButtonReleased) {
            if (use->menu.set.big_a.rect.left != 1920) {
            use->menu.set.fps_r.rect.left += 1920;
            sfSprite_setTextureRect(use->menu.set.big_a.sprite, use->menu.set.big_a.rect);
            }
        return (1);
    }
    return (0);
}