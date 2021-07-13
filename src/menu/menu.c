/*
** EPITECH PROJECT, 2021
** menu
** File description:
** menu
*/

#include "function.h"

int menu(rpg *use)
{
    while (use->menu.intro.boolean == 1 && my_intro(use) == 0);
    while (use->menu.name.boolean == 1 && my_name(use) == 0);
    while (use->menu.choose.boolean == 1 && my_choice(use) == 0);
    while (use->menu.launch.boolean == 1 && my_launch(use) == 0);
    while (use->menu.set.boolean == 1 && my_set(use) == 0);
    return (0);
}