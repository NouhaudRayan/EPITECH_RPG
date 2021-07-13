/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_event_change_armor
*/

#include "function.h"

int handle_event_change_armor_helmet(rpg *use, button_set_t new)
{
    if (use->event.type == sfEvtClosed) {
        use->close = 1;
        use->game.exit = 1;
        use->game.map.boolean = 0;
        use->game.inventory.armor.actual.boolean = 0;
        return (1);
    }
    pressed_button_detect(use, &use->game.inventory.armor.annuler, \
    position(830, 750), position(1100, 805));
    if (released_button_detect(use, use->game.inventory.armor.annuler, \
    position(830, 750), position(1100, 805)) == 1) {
        use->game.inventory.armor.annuler.rect.left = 0;
        sfSprite_setTextureRect(use->game.inventory.armor.annuler.sprite, \
        use->game.inventory.armor.annuler.rect);
        use->game.inventory.armor.actual.boolean = 0;
        return (1);
    }
    if (released_button_detect(use, use->game.inventory.armor.annuler, \
    position(564, 457), position(774, 624)) == 1) {
        use->game.inventory.helmet.boolean = 1;
        use->game.inventory.helmet.texture = new.texture;
        sfSprite_setTexture(use->game.inventory.helmet.sprite, use->game.inventory.helmet.texture, sfTrue);
        use->game.inventory.armor.actual.boolean = 0;
        return (1);
    }
    return (0);
}