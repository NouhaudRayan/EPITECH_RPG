/*
** EPITECH PROJECT, 2021
** final
** File description:
** button_in_green_opt
*/

#include "function.h"

void button_in_green_opt(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 828 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 887 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 344 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 411)
        sfRenderWindow_drawSprite(use->window, use->menu.set.difficult_l.sprite, NULL);
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1465 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 1525 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 344 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 411)
        sfRenderWindow_drawSprite(use->window, use->menu.set.difficult_r.sprite, NULL);
    if (sfMouse_getPositionRenderWindow(use->window).x >= 826 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 887 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 627 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 690)
        sfRenderWindow_drawSprite(use->window, use->menu.set.fps_l.sprite, NULL);
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1465 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 1525 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 627 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 690)
        sfRenderWindow_drawSprite(use->window, use->menu.set.fps_r.sprite, NULL);
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1665 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 1810 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 460 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 619)
        sfRenderWindow_drawSprite(use->window, use->menu.set.big_a.sprite, NULL);
}