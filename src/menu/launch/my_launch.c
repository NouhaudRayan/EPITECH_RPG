/*
** EPITECH PROJECT, 2021
** my launch
** File description:
** my_launch
*/

#include "function.h"

int my_launch(rpg *use)
{
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (handle_launch_event(use) == 1)
            return (1);
    animation_blurry(use);
    sfRenderWindow_drawSprite(use->window, use->menu.launch.hud.sprite, NULL);
    button_in_green(use);
    sfRenderWindow_display(use->window);
    return (0);
}