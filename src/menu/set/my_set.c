/*
** EPITECH PROJECT, 2021
** final
** File description:
** my_set
*/

#include "function.h"

void handle_difficulti(rpg *use)
{
    if (use->menu.set.difficult.rect.left == 0)
        use->difficulti = 1;
    if (use->menu.set.difficult.rect.left == 1920)
        use->difficulti = 0.75;
    if (use->menu.set.difficult.rect.left == 3840)
        use->difficulti = 0.5;
}

int my_set(rpg *use)
{
    while (use->menu.launch.hud.rect.left != 20  && transition_left(use) == 0);
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (handle_set_event(use) == 1)
            return (1);
    display_set(use);
    if (use->menu.set.swipe.boolean == 1) {
        handle_key_text(use);
        handle_key_swipe(use);
        handle_resolution(use);
    }
    handle_frame(use);
    handle_volume(use);
    handle_difficulti(use);
    button_in_green_opt(use);
    sfRenderWindow_display(use->window);
    return (0);
}