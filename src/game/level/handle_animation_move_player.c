/*
** EPITECH PROJECT, 2021
** game
** File description:
** handle_animation_move_player
*/

#include "function.h"

void handle_animation_move_player(rpg *use, int i)
{
    if (i == 1)
        animation_player(use, 0);
    if (i == 2)
        animation_player(use, 100);
    if (i == 3)
        animation_player(use, 150);
    if (i == 4)
        animation_player(use, 50);
}