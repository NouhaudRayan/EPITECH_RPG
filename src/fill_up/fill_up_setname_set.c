/*
** EPITECH PROJECT, 2021
** fill up setname set
** File description:
** fill_up_setname_set
*/

#include "function.h"

void fill_up_setname_set_t(rpg *use)
{
    use->menu.name.boolean = 0;
    use->menu.name.pseudo = malloc(sizeof(char) * 16);
    mem_set(use);
    text_set(&use->menu.name.text,use->menu.name.pseudo, \
    position(480, 470), colors(255, 255, 255), 100);
    background_set(&use->menu.name.back, "sprites/hud/menu/name.png", \
    dimension(0, 0, 1920, 1080), position(0, 0));
    button_set(&use->menu.name.arrow, "sprites/hud/menu/name_arrow.png", \
    dimension(0, 0, 1920, 1080), position(0, 0));
}