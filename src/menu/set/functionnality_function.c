/*
** EPITECH PROJECT, 2021
** final
** File description:
** functionnality_function
*/

#include "function.h"

void to_maj(char *txt)
{
    for (int i = 0; txt[i] != '\0'; i++) {
        if (txt[i] >= 'a' && txt[i] <= 'z')
            txt[i] = txt[i] - 32;
    }
}

void try(rpg *use, char *text)
{
    if (use->event.text.unicode < 128) {
        if (strlen(text) != 1) {
            text[strlen(text)] = use->event.text.unicode;
        }
    }
        to_maj(text);
}

void memymemou_set(rpg *use, char *text)
{
    for (int i = 0; i < 2; i++)
        text[i] = '\0';
}
