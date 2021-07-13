/*
** EPITECH PROJECT, 2021
** my_rpg
** File description:
** my_rpg
*/

#include "function.h"

void my_rpg(rpg *use)
{
    fill_up_struct(use);
    sfRenderWindow_setFramerateLimit(use->window, 60);
    while (sfRenderWindow_isOpen(use->window) && use->close == 0) {
        while (use->menu.launch.close == 0 && menu(use) == 0);
        while (use->game.exit == 0 && my_game(use) == 0);
        while (sfRenderWindow_pollEvent(use->window, &use->event))
            if (use->event.type == sfEvtClosed)
                sfRenderWindow_close(use->window);
        sfRenderWindow_display(use->window);
    }
}