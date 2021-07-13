/*
** EPITECH PROJECT, 2021
** memset
** File description:
** memset
*/

#include "function.h"

void mem_set(rpg *use)
{
    for(int i = 0; i < 15; i++)
        use->menu.name.pseudo[i] = '\0';
}