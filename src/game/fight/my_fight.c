/*
** EPITECH PROJECT, 2021
** game
** File description:
** my_fight
*/

#include "function.h"

int my_fight(rpg *use)
{
    display_fight(use);
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (handle_event_fight(use) == 1)
            return (1);
    animation_arrow_fight(use);
    handle_change_fight_hud(use);
    sfRenderWindow_display(use->window);
    return (0);
}