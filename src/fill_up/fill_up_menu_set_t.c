/*
** EPITECH PROJECT, 2021
** menu
** File description:
** fill_up_menu_set_t
*/

#include "function.h"

void fill_up_menu_set_t(rpg *use)
{
    fill_up_intro_set_t(use);
    fill_up_class_set_t(use);
    fill_up_setting_set_t(use);
    fill_up_set_swipe(use);
    fill_up_launcher_set_t(use);
    fill_up_setname_set_t(use);
    background_set(&use->menu.blurry, \
    "sprites/animation/menu/blurry.jpeg", dimension(0, 0, 1920, 1080), \
    position(0, 0));
}