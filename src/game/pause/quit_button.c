/*
** EPITECH PROJECT, 2021
** handle two button
** File description:
** sous fonctio
*/

#include "function.h"

int quit_button(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 180 && sfMouse_getPositionRenderWindow(use->window).x <= 450 && sfMouse_getPositionRenderWindow(use->window).y >= 60 && sfMouse_getPositionRenderWindow(use->window).y <= 160 && use->event.type == sfEvtMouseButtonReleased) {
        use->game.map.boolean = 1;
        use->game.pause.boolean = 0;
        return (1);
    }
    if (use->event.type == sfEvtClosed) {
        use->close = 1;
        use->game.exit = 1;
        use->game.pause.boolean = 0;
        return (1);
    }
    return (0);
}