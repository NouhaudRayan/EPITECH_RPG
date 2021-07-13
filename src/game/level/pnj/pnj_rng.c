/*
** EPITECH PROJECT, 2021
** final
** File description:
** pnj_rng
*/

#include "function.h"

int for_x(rpg *use)
{
    int x;
    if (use->player.rect.top == 150)
       return(x + 1);
    else if (use->player.rect.top == 50)
        return(x - 1);
    return(0);
}

int for_y(rpg *use)
{
    int y;
    if (use->player.rect.top == 100)
        return(y - 1);
    else if (use->player.rect.top == 0)
        return(y + 1);
    return(0);
}


void pnj_rng(rpg *use)
{
    int x = for_x(use);
    int y = for_y(use);
    use->game.player.i = 0;
    if (use->game.player.type == 'U') {
        use->game.player.rand = rand() % 8;
        check_my_msg(use);
    }
    else if (use->game.player.type == 'H' || use->game.player.type == 'S') {
        use->game.player.rand = wich_pnj(use, x, y);
        check_my_msg(use);
    }
}