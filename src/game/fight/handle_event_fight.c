/*
** EPITECH PROJECT, 2021
** game
** File description:
** handle_event_fight
*/

#include "function.h"

int handle_event_fight(rpg *use)
{
    if (use->event.type == sfEvtClosed) {
        use->close = 1;
        use->game.exit = 1;
        use->game.fight.boolean = 0;
        return (1);
    }
    if (use->game.fight.pop_arrow.boolean == 0) {
        handle_arrow_popless(use);
        handle_enter_popless(use);
    } else {
        handle_arrow_pop(use);
        if (handle_enter_pop(use) == 1)
            return (1);
    }
    return (0);
}