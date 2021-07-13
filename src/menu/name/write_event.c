/*
** EPITECH PROJECT, 2021
** write event
** File description:
** write_event
*/

#include "function.h"

int write_event(rpg *use)
{
    if (use->event.text.unicode < 128) {
        if (use->event.text.unicode == 8) {
            if (strlen(use->menu.name.pseudo) >= 1)
                use->menu.name.pseudo[strlen(use->menu.name.pseudo) - 1] = '\0';
        } else if (strlen(use->menu.name.pseudo) != 13)
            use->menu.name.pseudo[strlen(use->menu.name.pseudo)] = use->event.text.unicode;
    }
}