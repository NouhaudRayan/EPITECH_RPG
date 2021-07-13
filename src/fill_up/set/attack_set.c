/*
** EPITECH PROJECT, 2021
** game
** File description:
** attack_set
*/

#include "function.h"

int find_attack(rpg *use, char *attack)
{
    int x = 0;

    for (int i = 0; use->files.attack[i] != NULL; i++) {
        if (strcmp(use->files.attack[i], attack) == 0)
            x = i;
        if (strcmp(use->files.attack[i], attack) == 0)
            x = i;
    }
    return (x);
}

attack_set_t attack_set(rpg *use, char *att)
{
    int i = find_attack(use, att);
    attack_set_t attack;

    attack.name = use->files.attack[i];
    attack.damage = atoi(use->files.attack[i + 1]);
    attack.pp = atoi(use->files.attack[i + 2]);
    return (attack);
}