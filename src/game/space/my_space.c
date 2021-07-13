/*
** EPITECH PROJECT, 2021
** final
** File description:
** my_space
*/

#include "function.h"

void display_space(rpg *use)
{
    sfRenderWindow_drawSprite(use->window, use->game.background.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.space.spaceship.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.hud.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.life.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.shield.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.xp.sprite, NULL);
    handle_display_event(use);
}
int my_space(rpg *use)
{
    display_space(use);
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (handle_space_event(use) == 1)
            return (1);
    sfRenderWindow_display(use->window);
    return (0);
}