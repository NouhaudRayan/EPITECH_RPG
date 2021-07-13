/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_event_pnj
*/

#include "function.h"

int handle_event_pnj(rpg *use)
{
    if (use->event.type == sfEvtClosed) {
        use->close = 1;
        use->game.exit = 1;
        use->game.map.boolean = 1;
        return (1);
    }
    if (use->game.player.finish_seed == 1 && use->game.player.type == 'S') {
        if (use->event.key.code == sfKeyEnter && use->event.type == sfEvtKeyReleased) {
            if (use->game.player.i < strlen(use->game.player.seed_text))
                new_string(use, use->game.player.seed_text);
            else {
                use->game.player.box.boolean = 0;
                use->game.player.seed_text = NULL;
                return (1);
            }
        }
        use->game.quest.quest_two = 1;
    }

    else if (use->game.player.finish_bear == 1 && use->game.player.type == 'S') {
        if (use->event.key.code == sfKeyEnter && use->event.type == sfEvtKeyReleased) {
            if (use->game.player.i < strlen(use->game.player.bear_text))
                new_string(use, use->game.player.bear_text);
            else {
                use->game.player.box.boolean = 0;
                use->game.player.bear_text = NULL;
                return (1);
            }
        }
        use->game.quest.quest_one = 1;
    }
    else {
        if (use->event.key.code == sfKeyEnter && use->event.type == sfEvtKeyReleased) {
            if (use->game.player.type == 'U') {
                if (use->game.player.i < strlen(use->game.player.texte[use->game.player.rand]))
                    check_my_msg(use);
                else {
                    use->game.player.box.boolean = 0;
                    return (1);
                }
            }
            if (use->game.player.type == 'H') {
                if (use->game.player.i < strlen(use->game.player.texte[use->game.player.rand]))
                    check_my_msg(use);
                else {
                    use->game.player.box.boolean = 0;
                    return (1);
                }
            }
            if (use->game.player.type == 'S')
            {
                if (use->game.player.i < strlen(use->game.player.texte[use->game.player.rand]))
                    check_my_msg(use);
                else {
                    use->game.player.box.boolean = 0;
                    return (1);
                }
            }
        }
    }
    return (0);
}