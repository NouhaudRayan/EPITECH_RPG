/*
** EPITECH PROJECT, 2021
** final
** File description:
** display_set
*/

#include "function.h"

void display_set(rpg *use)
{
    animation_blurry(use);
    sfRenderWindow_drawSprite(use->window, use->menu.launch.hud.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.hud.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->menu.set.fps.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->menu.set.difficult.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->menu.set.sound.sprite, NULL);
    sfRenderWindow_drawText(use->window, use->menu.set.nb.text, NULL);
}