/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_resolution
*/

#include "function.h"

sfVector2u posi(int x, int y)
{
    sfVector2u pos;

    pos.x = x;
    pos.y = y;
    return (pos);
}

void change_buffer(rpg *use, int height, int width)
{
    sfVector2i posa;

    posa.x = height;
    posa.y = width;
    sfRenderWindow_setSize(use->window, posi(height, width));
}

void handle_resolution(rpg *use)
{
    sfRenderWindow_drawSprite(use->window, use->menu.set.resolution.sprite, NULL);
    if (sfMouse_getPositionRenderWindow(use->window).x >= 22 && sfMouse_getPositionRenderWindow(use->window).x <= 190 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 190 && sfMouse_getPositionRenderWindow(use->window).y <= 232)
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.resolution_l.sprite, NULL);
    if (sfMouse_getPositionRenderWindow(use->window).x >= 492 && sfMouse_getPositionRenderWindow(use->window).x <= 528 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 196 && sfMouse_getPositionRenderWindow(use->window).y <= 230)
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.resolution_r.sprite, NULL);
    if (sfMouse_getPositionRenderWindow(use->window).x >= 22 && sfMouse_getPositionRenderWindow(use->window).x <= 190 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 190 && sfMouse_getPositionRenderWindow(use->window).y <= 232
        && use->event.type == sfEvtMouseButtonPressed) {
            sfSound_play(use->music.effect.sound);
            if (use->menu.set.swipe.resolution_l.rect.left == 0) {
                use->menu.set.swipe.resolution_l.rect.left = 1920;
                sfSprite_setTextureRect(use->menu.set.swipe.resolution_l.sprite, use->menu.set.swipe.resolution_l.rect);
            }
    } else {
        use->menu.set.swipe.resolution_l.rect.left = 0;
        sfSprite_setTextureRect(use->menu.set.swipe.resolution_l.sprite, use->menu.set.swipe.resolution_l.rect);
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 492 && sfMouse_getPositionRenderWindow(use->window).x <= 528 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 196 && sfMouse_getPositionRenderWindow(use->window).y <= 230
        && use->event.type == sfEvtMouseButtonPressed) {
            sfSound_play(use->music.effect.sound);
            if (use->menu.set.swipe.resolution_r.rect.left == 0) {
                use->menu.set.swipe.resolution_r.rect.left = 1920;
                sfSprite_setTextureRect(use->menu.set.swipe.resolution_r.sprite, use->menu.set.swipe.resolution_r.rect);
            }
    } else {
        use->menu.set.swipe.resolution_r.rect.left = 0;
        sfSprite_setTextureRect(use->menu.set.swipe.resolution_r.sprite, use->menu.set.swipe.resolution_r.rect);
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 492 && sfMouse_getPositionRenderWindow(use->window).x <= 528 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 196 && sfMouse_getPositionRenderWindow(use->window).y <= 230
        && use->event.type == sfEvtMouseButtonReleased) {
            if (use->menu.set.resolution.rect.left == 0) {
                use->menu.set.resolution.rect.left = 1920;
                sfSprite_setTextureRect(use->menu.set.resolution.sprite, use->menu.set.resolution.rect);
                change_buffer(use, 1280, 720);
            }
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 22 && sfMouse_getPositionRenderWindow(use->window).x <= 190 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 190 && sfMouse_getPositionRenderWindow(use->window).y <= 232
        && use->event.type == sfEvtMouseButtonReleased) {
            if (use->menu.set.resolution.rect.left == 1920) {
                use->menu.set.resolution.rect.left = 0;
                sfSprite_setTextureRect(use->menu.set.resolution.sprite, use->menu.set.resolution.rect);
                change_buffer(use, 1920, 1080);
            }
    }
}