/*
** EPITECH PROJECT, 2021
** game
** File description:
** handle_event_level
*/

#include "function.h"

int handle_event_level(rpg *use)
{
    if (use->event.type == sfEvtClosed) {
        use->close = 1;
        use->game.exit = 1;
        use->game.map.boolean = 0;
        return (1);
    }
    handle_pnj(use);
    handle_player_updown_move(use);
    handle_player_rightleft_move(use);
    handle_space_and_pause_choice(use);
    handle_features(use);
    handle_item(use);
    return (0);
}