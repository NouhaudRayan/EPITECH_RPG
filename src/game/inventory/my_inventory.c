/*
** EPITECH PROJECT, 2021
** final
** File description:
** my_inventory
*/

#include "function.h"

int my_inventory(rpg *use)
{
    display_level(use);
    display_invetory(use);
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (handle_event_inventory(use) == 1)
            return (1);
    sfRenderWindow_display(use->window);
    return (0);
}