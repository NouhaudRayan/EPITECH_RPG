/*
** EPITECH PROJECT, 2021
** final
** File description:
** button_difficult
*/

#include "function.h"

int button_difficult_left(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 828 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 887 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 344 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 411 &&
    use->event.type == sfEvtMouseButtonPressed) {
        sfSound_play(use->music.effect.sound);
        if (use->menu.set.difficult_l.rect.left != 1920) {
            use->menu.set.difficult_l.rect.left += 1942;
            sfSprite_setTextureRect(use->menu.set.difficult_l.sprite, use->menu.set.difficult_l.rect);
        }
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 828 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 887 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 344 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 411 &&
    use->event.type == sfEvtMouseButtonReleased) {
        if (use->menu.set.difficult.rect.left >= 1920) {
            use->menu.set.difficult.rect.left -= 1920;
            sfSprite_setTextureRect(use->menu.set.difficult.sprite, use->menu.set.difficult.rect);
        }
        return (1);
    }
    return (0);
}

int button_difficult_right(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1465 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1525 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 344 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 411 &&
    use->event.type == sfEvtMouseButtonPressed) {
        sfSound_play(use->music.effect.sound);
        if (use->menu.set.difficult_r.rect.left != 1920) {
            use->menu.set.difficult_r.rect.left += 1942;
            sfSprite_setTextureRect(use->menu.set.difficult_r.sprite, use->menu.set.difficult_r.rect);
        }
    }
   if (sfMouse_getPositionRenderWindow(use->window).x >= 1465 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1525 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 344 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 411 &&
    use->event.type == sfEvtMouseButtonReleased) {
        if (use->menu.set.difficult.rect.left <= 1920) {
            use->menu.set.difficult.rect.left += 1920;
            sfSprite_setTextureRect(use->menu.set.difficult.sprite, use->menu.set.difficult.rect);
        }
        return (1);
    }
    return (0);
}

void button_difficult(rpg *use)
{
    if (button_difficult_left(use) == 1) {
        use->menu.set.difficult_l.rect.left = 0;
        sfSprite_setTextureRect(use->menu.set.difficult_l.sprite, use->menu.set.difficult_l.rect);
    }
    if (button_difficult_right(use) == 1) {
        use->menu.set.difficult_r.rect.left = 0;
        sfSprite_setTextureRect(use->menu.set.difficult_r.sprite, use->menu.set.difficult_r.rect);
    }
}