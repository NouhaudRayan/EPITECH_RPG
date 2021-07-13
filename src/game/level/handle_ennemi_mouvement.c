/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_ennemi_mouvement
*/

#include "function.h"

void handle_ennemi_movement_two(rpg *use, int test)
{
    if (use->game.player.ennemi->ennemi.moove == 3 && \
    use->game.player.ennemi->ennemi.y == 0) {
        test = rand() % 2;
        if (test == 0)
            use->game.player.ennemi->ennemi.moove = 2;
        else
            use->game.player.ennemi->ennemi.moove = 0;
    }
    if (use->game.player.ennemi->ennemi.moove == 1 && \
    use->game.player.ennemi->ennemi.x == 0) {
        test = rand() % 2;
        if (test == 0)
            use->game.player.ennemi->ennemi.moove = 2;
        else
            use->game.player.ennemi->ennemi.moove = 0;
    }
    if (use->game.player.ennemi->ennemi.moove == 0 && \
    use->game.player.ennemi->path[use->game.player.ennemi->ennemi.x + 1] \
    == NULL)
        use->game.player.ennemi->ennemi.moove = 1;
}

void handle_ennemi_movement(rpg *use)
{
    int test = 2;

    use->game.player.tmp_ennemi = use->game.player.ennemi;
    for (int i = 0; i < 28; i++) {
        handle_display_ennemi(use);
        if (use->game.player.ennemi->ennemi.moove == 2 && \
        use->game.player.ennemi->path[use->game.player.ennemi->ennemi.x]\
        [use->game.player.ennemi->ennemi.y + 1] == '\0')
            use->game.player.ennemi->ennemi.moove = 3;
        handle_ennemi_movement_two(use, test);
        use->game.player.ennemi = use->game.player.ennemi->next;
    }
    use->game.player.ennemi = use->game.player.tmp_ennemi;
}