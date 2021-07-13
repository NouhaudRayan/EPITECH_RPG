/*
** EPITECH PROJECT, 2021
** fill up class
** File description:
** fill_up_class_set
*/

#include "function.h"

void fill_up_class_set_t_two(rpg *use)
{
    background_set(&use->menu.choose.iron, \
    "sprites/animation/menu/choose_iron.png", dimension(0, 0, 308, 471), \
    position(805, 306));
    background_set(&use->menu.choose.thor, \
    "sprites/animation/menu/choose_thor.png", dimension(0, 0, 308, 471), \
    position(1413, 306));
    background_set(&use->menu.choose.capt, \
    "sprites/animation/menu/choose_captain.png", dimension(0, 0, 308, 471), \
    position(196, 306));
    use->menu.choose.captaine_america.boolean = 1;
}

void fill_up_class_set_t(rpg *use)
{
    use->menu.choose.boolean = 0;
    button_set(&use->menu.choose.iron_man, "sprites/hud/menu/choose_two.png", \
    dimension(0, 0, 1920, 1080), position(0, 0));
    button_set(&use->menu.choose.captaine_america, \
    "sprites/hud/menu/choose_one.png", dimension(0, 0, 1920, 1080), \
    position(0, 0));
    button_set(&use->menu.choose.the_thor, "sprites/hud/menu/choose_three.png"\
    , dimension(0, 0, 1920, 1080), position(0, 0));
    button_set(&use->menu.choose.sure, "sprites/hud/menu/choose_sure.png", \
    dimension(0, 0, 1920, 1080), position(0, 0));
    background_set(&use->menu.choose.hud, "sprites/hud/menu/choose.png", \
    dimension(0, 0, 1920, 1080), position(0, 0));
    fill_up_class_set_t_two(use);
}