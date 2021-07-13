/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_frame
*/

#include "function.h"

void handle_frame(rpg *use)
{
    if (use->menu.set.fps.rect.left == 0)
        sfRenderWindow_setFramerateLimit(use->window, 30);
    if (use->menu.set.fps.rect.left == 1920)
        sfRenderWindow_setFramerateLimit(use->window, 60);
    if (use->menu.set.fps.rect.left == 3840 )
        sfRenderWindow_setFramerateLimit(use->window, 120);
}