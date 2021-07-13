/*
** EPITECH PROJECT, 2021
** game
** File description:
** spaceship_set
*/

#include "function.h"

void spaceship_set(spaceship_set_t *spaceship, char *files, \
sfIntRect rect, sfVector2f pos)
{
    spaceship->pos = pos;
    spaceship->rect = rect;
    spaceship->sprite = sfSprite_create();
    spaceship->texture = sfTexture_createFromFile(files, NULL);
    sfSprite_setTexture(spaceship->sprite, spaceship->texture, sfTrue);
    sfSprite_setPosition(spaceship->sprite, spaceship->pos);
    sfSprite_setTextureRect(spaceship->sprite, spaceship->rect);
}