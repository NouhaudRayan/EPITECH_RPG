/*
** EPITECH PROJECT, 2021
** text set
** File description:
** sous fonctio
*/

#include "function.h"

void text_set(texte_set_t *text, char *texte, sfVector2f pos, \
sfColor color, int size)
{
    text->pos = pos;
    text->text = sfText_create();
    text->font = sfFont_createFromFile("sprites/font/unispace.ttf");
    sfText_setString(text->text, texte);
    sfText_setFont(text->text, text->font);
    sfText_setPosition(text->text, text->pos);
    sfText_setCharacterSize(text->text, size);
    sfText_setColor(text->text, color);
}