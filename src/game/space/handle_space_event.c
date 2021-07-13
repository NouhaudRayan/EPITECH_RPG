/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_space_event
*/

#include "function.h"

int handle_space_event(rpg *use)
{
    if (use->event.type == sfEvtClosed) {
        use->close = 1;
        use->game.exit = 1;
        use->game.space.boolean = 0;
    }
    return (1);
}