/*
** EPITECH PROJECT, 2021
** final
** File description:
** my_change_attack
*/

#include "function.h"

int my_change_attack(rpg *use, attack_set_t new)
{
    sfText_setString(use->game.inventory.attack.futur.name.text, new.name);
    sfText_setString(use->game.inventory.attack.futur.damage.text, my_getstr(new.damage));
    sfText_setString(use->game.inventory.attack.futur.pp.text, my_getstr(new.pp));
    display_level(use);
    display_change_attack(use);
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (handle_event_change_attack(use, new) == 1)
            return (1);
    pos_button_detect(use, use->game.inventory.attack.annuler, position(830, 860), position(1100, 920));
    pos_button_detect(use, use->game.inventory.attack.one, \
    position(546, 440), position(1375, 562));
    pos_button_detect(use, use->game.inventory.attack.two, \
    position(546, 650), position(1375, 772));
    sfRenderWindow_display(use->window);
    return (0);
}