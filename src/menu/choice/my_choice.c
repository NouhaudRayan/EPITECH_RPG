/*
** EPITECH PROJECT, 2021
** my choice
** File description:
** my_choice
*/

#include "function.h"

int my_choice(rpg *use)
{
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (handle_event_choice(use) == 1)
            return (1);
    animation_blurry(use);
    animation_playerchoice(use);
    sfRenderWindow_drawSprite(use->window, use->menu.choose.hud.sprite, NULL);
    button_display(use);
    sfRenderWindow_display(use->window);
    return (0);
}