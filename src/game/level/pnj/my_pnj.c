/*
** EPITECH PROJECT, 2021
** game
** File description:
** my_level
*/

#include "function.h"

int my_len(char *str)
{
    int i = 0;
    for (; str[i] != '|' && str[i] != '\0'; i++);
    return (i);
}

int wich_pnj(rpg *use, int x , int y)
{
    for (int i = 0; use->game.player.texte[i] != NULL; i += 3) {
        if (use->game.map.x_p + x == atoi(use->game.player.texte[i]) && use->game.map.y_p + y == atoi(use->game.player.texte[i + 1])) {
            return (i + 2);
        }
    }
    return (0);
}

int my_pnj(rpg *use)
{
    display_level(use);
    sfRenderWindow_drawSprite(use->window, use->game.player.box.sprite, NULL);
    sfRenderWindow_drawText(use->window, use->game.player.text.text, NULL);
    while (sfRenderWindow_pollEvent(use->window, &use->event)) {
        if (handle_event_pnj(use) == 1)
            return (1);
    }
    check_quest(use);
    check_distri(use);
    check_seed(use);
    sfRenderWindow_display(use->window);
    return (0);
}