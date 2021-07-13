/*
** EPITECH PROJECT, 2021
** my load
** File description:
** my_loading
*/

#include "function.h"

int my_loading(rpg *use)
{
    sfRenderWindow_drawSprite(use->window, use->load.back.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->load.barre.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->load.round.sprite, NULL);
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (use->event.type == sfEvtClosed) {
            use->close = 1;
            use->menu.launch.close = 1;
            use->menu.launch.boolean = 1;
            return (1);
        }
    barre_load_anim(use);
    round_load_anime(use);
    sfRenderWindow_display(use->window);
    return (0);
}