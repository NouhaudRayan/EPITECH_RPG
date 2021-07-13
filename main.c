/*
** EPITECH PROJECT, 2021
** my_rpg
** File description:
** main
*/

#include "include/function.h"

int main(int ac, char **av)
{
    rpg *use = malloc(sizeof(rpg));

    if (ac > 2)
        return (84);
    if (ac == 2)
        use->save = 1;
    my_rpg(use);
    return (0);
}