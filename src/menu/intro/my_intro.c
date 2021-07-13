/*
** EPITECH PROJECT, 2021
** my intro
** File description:
** my_intro
*/

#include "function.h"

int my_intro(rpg *use)
{
    if (use->menu.intro.start.rect.left >= 3840 && use->menu.intro.start.rect.top >= 9720)
        sfRenderWindow_drawSprite(use->window, use->menu.intro.end.sprite, NULL);
    else
        sfRenderWindow_drawSprite(use->window, use->menu.intro.start.sprite, NULL);
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (use->event.type == sfEvtClosed) {
            use->close = 1;
            use->game.exit = 1;
            use->menu.intro.boolean = 0;
            use->menu.launch.close = 1;
            return (1);
        }
    animation_intro(use);
    sfRenderWindow_display(use->window);
    return (1);
}