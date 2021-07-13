/*
** EPITECH PROJECT, 2021
** final
** File description:
** check_my_msg
*/

#include "function.h"

void new_string(rpg *use, char *text)
{
    use->game.player.i = 0;
    char *temp = malloc(sizeof(char) * strlen(text) + 1);
    int x = 0;
    for (; text[use->game.player.i] != '\0'; use->game.player.i++, x++) {
        if (text[use->game.player.i] == '#')
            temp[x] = '\n';
        else
            temp[x] = text[use->game.player.i];
    }
    temp[x] = '\0';
    use->game.player.i++;
    sfText_setString(use->game.player.text.text, temp);
}

void check_my_msg(rpg *use)
{
    char *temp = malloc(sizeof(char) * strlen(use->game.player.texte[use->game.player.rand]) + 1);
    int x = 0;
    for (;  use->game.player.texte[use->game.player.rand][use->game.player.i] != '|' &&
    use->game.player.texte[use->game.player.rand][use->game.player.i] != '\0';
    use->game.player.i++, x++) {
        if (use->game.player.texte[use->game.player.rand][use->game.player.i] == '#')
            temp[x] = '\n';
        else
            temp[x] = use->game.player.texte[use->game.player.rand][use->game.player.i];
    }
    temp[x] = '\0';
    use->game.player.i++;
    sfText_setString(use->game.player.text.text, temp);
}