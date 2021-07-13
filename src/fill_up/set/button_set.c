/*
** EPITECH PROJECT, 2021
** button set
** File description:
** button_set
*/

#include "function.h"

void button_set(button_set_t *button, char *files, sfIntRect rect, \
sfVector2f pos)
{
    button->boolean = 0;
    button->rect = rect;
    button->pos = pos;
    button->sprite = sfSprite_create();
    button->texture = sfTexture_createFromFile(files, NULL);
    sfSprite_setTexture(button->sprite, button->texture, sfTrue);
    sfSprite_setTextureRect(button->sprite, button->rect);
    sfSprite_setPosition(button->sprite, button->pos);
}