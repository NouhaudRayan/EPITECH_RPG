/*
** EPITECH PROJECT, 2021
** handle button event
** File description:
** handle_button_event
*/

#include "function.h"

int button_pseudo(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1427 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 1498 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 497 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 575 &&
        use->event.type == sfEvtMouseButtonPressed)
        if (use->menu.name.arrow.rect.left <= 0) {
            use->menu.name.arrow.rect.left += 1920;
            sfSprite_setTextureRect(use->menu.name.arrow.sprite, use->menu.name.arrow.rect);
        }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1427 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 1498 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 497 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 575 &&
        use->event.type == sfEvtMouseButtonReleased && strlen(use->menu.name.pseudo) != 0) {
            if (use->menu.name.arrow.rect.left != 1920) {
                use->menu.name.arrow.rect.left += 1920;
                sfSprite_setTextureRect(use->menu.name.arrow.sprite, use->menu.name.arrow.rect);
            }
        return (1);
    }
    return (0);
}