/*
** EPITECH PROJECT, 2021
** back set
** File description:
** background_set
*/

#include "function.h"

void background_set(background_set_t *background, char *files, \
sfIntRect rect, sfVector2f pos)
{
    background->clock = clock_set(background->clock);
    background->rect = rect;
    background->pos = pos;
    background->sprite = sfSprite_create();
    background->texture = sfTexture_createFromFile(files, NULL);
    sfSprite_setTexture(background->sprite, background->texture, sfTrue);
    sfSprite_setTextureRect(background->sprite, background->rect);
    sfSprite_setPosition(background->sprite, background->pos);
}