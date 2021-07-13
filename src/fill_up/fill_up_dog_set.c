/*
** EPITECH PROJECT, 2021
** final
** File description:
** fill_up_dog_set
*/

#include "function.h"

void fill_up_dog_set(rpg *use)
{
    use->game.player.dog.pos = position(7700, 18450);
    use->game.player.dog.rect = dimension(0, 0, 45, 50);
    use->game.player.dog.sprite = sfSprite_create();
    use->game.player.dog.texture = sfTexture_createFromFile\
    ("sprites/personnage/level/dog.png", NULL);
    sfSprite_setTexture(use->game.player.dog.sprite, \
    use->game.player.dog.texture, sfTrue);
    sfSprite_setTextureRect(use->game.player.dog.sprite, \
    use->game.player.dog.rect);
    sfSprite_setPosition(use->game.player.dog.sprite, \
    use->game.player.dog.pos);
}