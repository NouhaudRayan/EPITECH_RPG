/*
** EPITECH PROJECT, 2021
** game
** File description:
** my_level
*/

#include "function.h"

int my_level(rpg *use)
{
    display_level(use);
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (handle_event_level(use) == 1)
            return (1);
    handle_message_box(use);
    handle_display_features(use);
    handle_change_hud(use);
    handle_ennemi_movement(use);
    sfRenderWindow_setView(use->window, use->game.view);
    event_in_game(use);
    sfRenderWindow_display(use->window);
    return (0);
}