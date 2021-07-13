/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_event_change_attack
*/

#include "function.h"

void set_new_string_inventory(rpg *use, attack_set_t two, attack_set_t one)
{
    sfText_setString(use->game.inventory.one.name.text, one.name);
    sfText_setString(use->game.inventory.one.damage.text, my_getstr(one.damage));
    sfText_setString(use->game.inventory.one.pp.text, my_getstr(one.pp));
    sfText_setString(use->game.inventory.two.name.text, two.name);
    sfText_setString(use->game.inventory.two.damage.text, my_getstr(two.damage));
    sfText_setString(use->game.inventory.two.pp.text, my_getstr(two.pp));
}

int handle_event_change_attack(rpg *use, attack_set_t new)
{
    if (use->event.type == sfEvtClosed) {
        use->close = 1;
        use->game.exit = 1;
        use->game.map.boolean = 0;
        use->game.inventory.attack.boolean = 0;
        return (1);
    }
    if (released_button_detect(use, use->game.inventory.attack.annuler, position(546, 440), position(1375, 562)) == 1) {
        use->player.attack_one = new;
        set_new_string_inventory(use, use->player.attack_one, use->player.attack_two);
        use->game.inventory.attack.annuler.rect.left = 0;
        sfSprite_setTextureRect(use->game.inventory.attack.annuler.sprite, use->game.inventory.attack.annuler.rect);
        use->game.inventory.attack.boolean = 0;
    }
    if (released_button_detect(use, use->game.inventory.attack.annuler, position(546, 650), position(1375, 772)) == 1) {
        use->player.attack_two = new;
        set_new_string_inventory(use, use->player.attack_one, use->player.attack_two);
        use->game.inventory.attack.annuler.rect.left = 0;
        sfSprite_setTextureRect(use->game.inventory.attack.annuler.sprite, use->game.inventory.attack.annuler.rect);
        use->game.inventory.attack.boolean = 0;
    }
    pressed_button_detect(use, &use->game.inventory.attack.annuler, position(830, 860), position(1100, 920));
    if (released_button_detect(use, use->game.inventory.attack.annuler, position(830, 860), position(1100, 920)) == 1) {
        use->game.inventory.attack.annuler.rect.left = 0;
        sfSprite_setTextureRect(use->game.inventory.attack.annuler.sprite, use->game.inventory.attack.annuler.rect);
        use->game.inventory.attack.boolean = 0;
        return (1);
    }
    return (0);
}