/*
** EPITECH PROJECT, 2021
** final
** File description:
** transition_left
*/

#include "function.h"

int transition_left(rpg *use)
{
    animation_blurry(use);
    animation_left(use);
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (use->event.type == sfEvtClosed) {
            use->close = 1;
            use->game.exit = 1;
            use->menu.set.boolean = 0;
            use->menu.launch.close = 1;
            return (1);
        }
    sfRenderWindow_display(use->window);
    return (0);
}