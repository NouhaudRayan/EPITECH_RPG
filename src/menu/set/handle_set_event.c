/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_set_event
*/

#include "function.h"

int handle_set_event(rpg *use)
{
    if (use->event.type == sfEvtClosed) {
        use->close = 1;
        use->game.exit = 1;
        use->menu.set.boolean = 0;
        use->menu.launch.close = 1;
        return (1);
    }
    if (button_left(use) == 1) {
        sfSound_play(use->music.effect.sound);
        while (use->menu.launch.hud.rect.left != 1920 && transition_right(use) == 0);
        use->menu.set.boolean = 0;
        use->menu.launch.boolean = 1;
        return (1);
    }
    button_difficult(use);
    button_fps(use);
    handle_sound_barre(use);
    handle_swipe(use);
    return (0);
}