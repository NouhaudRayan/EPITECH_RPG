/*
** EPITECH PROJECT, 2021
** final
** File description:
** transitiob_right
*/

#include "function.h"

int transition_right(rpg *use)
{
    animation_blurry(use);
    animation_right(use);
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