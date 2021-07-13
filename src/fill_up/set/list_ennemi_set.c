/*
** EPITECH PROJECT, 2021
** final
** File description:
** list_ennemi_set
*/

#include "function.h"

char *my_rng(rpg *use)
{
    int temp = rand() % 4;

    if (temp == 0)
        return ("save/preset_ennemie_1.txt");
    if (temp == 1)
        return ("save/preset_ennemie_2.txt");
    if (temp == 2)
        return ("save/preset_ennemie_3.txt");
    if (temp == 3)
        return ("save/preset_ennemie_4.txt");
    return ("save/preset_ennemie_1.txt");
}

void my_random_insertion(rpg *use, char *preset, int x, int y)
{
    int test = rand() % 3;;

    if (test == 0) {
        use->game.player.ennemi = insertion_pos(use->game.player.ennemi, \
        0, use, "save/path_2.txt", preset, position(atoi(\
        use->files.ennemi_pos[x]), atoi(use->files.ennemi_pos[y])));
    } else if (test == 1) {
        use->game.player.ennemi = insertion_pos(use->game.player.ennemi, \
        0, use, "save/path_3.txt", preset, position(atoi(\
        use->files.ennemi_pos[x]), atoi(use->files.ennemi_pos[y])));
    } else
        use->game.player.ennemi = insertion_pos(use->game.player.ennemi, \
        0, use, "save/path_1.txt", preset, position(atoi(\
        use->files.ennemi_pos[x]), atoi(use->files.ennemi_pos[y])));
    if (use->game.player.ennemi->path[0][1] == 'X')
        use->game.player.ennemi->ennemi.moove = 2;
    else
        use->game.player.ennemi->ennemi.moove = 0;
}

void list_ennemi_set(rpg *use)
{
    int x = 0;
    int y = 1;
    char *preset = NULL;

    for (int i = 0; i < 28; i++, x += 3, y += 3) {
        preset = my_rng(use);
        if (i == 0) {
            use->game.player.ennemi = initialisation(use, "save/path_1.txt", \
            preset, position(atoi(use->files.ennemi_pos[x]), \
            atoi(use->files.ennemi_pos[y])));
        } else
            use->game.player.ennemi = insertion_pos(use->game.player.ennemi, \
            0, use, use->files.ennemi_pos[y + 1], preset, position(atoi(\
            use->files.ennemi_pos[x]), atoi(use->files.ennemi_pos[y])));
    }
}