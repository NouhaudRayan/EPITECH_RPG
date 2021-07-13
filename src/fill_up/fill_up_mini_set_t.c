/*
** EPITECH PROJECT, 2021
** final
** File description:
** fill_up_mini_set_t
*/

#include "function.h"

void fill_up_mini_set_t(rpg *use)
{
    use->game.mini.boolean = 0;
    use->game.mini.pos = position(7640, 17973);
    use->game.mini.rect = dimension(0, 0, 477, 950);
    use->game.mini.sprite = sfSprite_create();
    use->game.mini.texture = sfTexture_createFromFile\
    ("sprites/hud/level/minimap.png", NULL);
    sfSprite_setTexture(use->game.mini.sprite, use->game.mini.texture, sfTrue);
    sfSprite_setPosition(use->game.mini.sprite, use->game.mini.pos);
    sfSprite_setTextureRect(use->game.mini.sprite, use->game.mini.rect);
}