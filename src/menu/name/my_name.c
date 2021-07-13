/*
** EPITECH PROJECT, 2021
** my anme
** File description:
** my_name
*/

#include "function.h"

int my_name(rpg *use)
{
    sfRenderWindow_drawSprite(use->window, use->menu.name.back.sprite, NULL);
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (handle_name_event(use) == 1)
            return (1);
    button_name_display(use);
    sfText_setString(use->menu.name.text.text, use->menu.name.pseudo);
    sfRenderWindow_drawText(use->window, use->menu.name.text.text, NULL);
    sfRenderWindow_display(use->window);
    return (0);
}