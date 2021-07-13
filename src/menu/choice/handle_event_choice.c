/*
** EPITECH PROJECT, 2021
** handle event choice
** File description:
** handle_event_choice
*/

#include "function.h"

int handle_event_choice(rpg *use)
{
    if (use->event.type == sfEvtClosed) {
        use->close = 1;
        use->game.exit = 1;
        use->menu.choose.boolean = 0;
        use->menu.launch.close = 1;
        return (1);
    }
    if (use->menu.choose.sure.boolean == 0)
        handle_choice(use);
    else
        handle_q(use);
    handle_enter(use);
    return (0);
}