/*
** EPITECH PROJECT, 2021
** credit event bare
** File description:
** sous fonction
*/

#include "function.h"

void credit_event_barre(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 60 && sfMouse_getPositionRenderWindow(use->window).x <= 160 && sfMouse_getPositionRenderWindow(use->window).y >= 55 && sfMouse_getPositionRenderWindow(use->window).y <= 80 && use->event.type == sfEvtMouseButtonReleased)
    {
        if (use->game.pause.interface.rect.left > 6670)
            while (use->game.pause.interface.rect.left != 0 && animation_pause(use, 20) == 0)
                ;
        else
            while (use->game.pause.interface.rect.left != 0 && animation_pause(use, -20) == 0)
                ;
        use->game.pause.play.boolean == -1;
    }
}