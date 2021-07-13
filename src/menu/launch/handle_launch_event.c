/*
** EPITECH PROJECT, 2021
** handle launch event
** File description:
** handle_launch_event
*/

#include "function.h"

int handle_launch_event(rpg *use)
{
    if (button_start(use) == 1)
        return (1);
    if (button_options(use) == 1)
        return (1);
    if (use->event.type == sfEvtClosed || button_exit(use) == 1) {
        use->close = 1;
        use->game.exit = 1;
        use->menu.launch.boolean = 0;
        use->menu.launch.close = 1;
        return (1);
    }
    return (0);
}