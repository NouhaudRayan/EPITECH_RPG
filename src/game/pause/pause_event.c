/*
** EPITECH PROJECT, 2021
** handle pause evemt
** File description:
** sous fonction
*/

#include "function.h"

int handle_pause_event(rpg *use)
{
    if (quit_button(use) == 1)
        return (1);
    quest_event_barre(use);
    inventory_event_barre(use);
    achievement_event_barre(use);
    sound_event_barre(use);
    touch_event_barre(use);
    credit_event_barre(use);
    return (0);
}