/*
** EPITECH PROJECT, 2021
** final
** File description:
** button_fps
*/

#include "function.h"

int button_fps_left(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 826 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 887 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 627 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 690 &&
        use->event.type == sfEvtMouseButtonPressed) {
        sfSound_play(use->music.effect.sound);
        if (use->menu.set.fps_l.rect.left != 1920) {
            use->menu.set.fps_l.rect.left += 1942;
            sfSprite_setTextureRect(use->menu.set.fps_l.sprite, use->menu.set.fps_l.rect);
        }
        }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 826 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 887 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 627 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 690 &&
        use->event.type == sfEvtMouseButtonReleased) {
        if (use->menu.set.fps.rect.left >= 1920) {
            use->menu.set.fps.rect.left -= 1920;
            sfSprite_setTextureRect(use->menu.set.fps.sprite, use->menu.set.fps.rect);
        }
        return (1);
    }
    return (0);
}

int button_fps_right(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1465 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 1525 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 627 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 690 &&
        use->event.type == sfEvtMouseButtonPressed) {
        sfSound_play(use->music.effect.sound);
        if (use->menu.set.fps_r.rect.left != 1920) {
            use->menu.set.fps_r.rect.left += 1942;
            sfSprite_setTextureRect(use->menu.set.fps_r.sprite, use->menu.set.fps_r.rect);
        }
        }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1465 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 1525 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 627 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 690 &&
        use->event.type == sfEvtMouseButtonReleased) {
        if (use->menu.set.fps.rect.left <= 1920){
            use->menu.set.fps.rect.left += 1920;
            sfSprite_setTextureRect(use->menu.set.fps.sprite, use->menu.set.fps.rect);
        }
        return (1);
        }
    return (0);
}

void button_fps(rpg *use)
{
    if (button_fps_left(use) == 1) {
        use->menu.set.fps_l.rect.left = 0;
        sfSprite_setTextureRect(use->menu.set.fps_l.sprite, use->menu.set.fps_l.rect);
    }
    if (button_fps_right(use) == 1) {
        use->menu.set.fps_r.rect.left = 0;
        sfSprite_setTextureRect(use->menu.set.fps_r.sprite, use->menu.set.fps_r.rect);
    }
}