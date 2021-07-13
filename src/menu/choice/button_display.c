/*
** EPITECH PROJECT, 2021
** button display
** File description:
** button_display
*/

#include "function.h"

void button_display(rpg *use)
{
    if (use->menu.choose.iron_man.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->menu.choose.iron_man.sprite, NULL);
    if (use->menu.choose.captaine_america.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->menu.choose.captaine_america.sprite, NULL);
    if (use->menu.choose.the_thor.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->menu.choose.the_thor.sprite, NULL);
    if (use->menu.choose.sure.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->menu.choose.sure.sprite, NULL);
}