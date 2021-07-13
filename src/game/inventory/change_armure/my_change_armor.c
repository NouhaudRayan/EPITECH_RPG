/*
** EPITECH PROJECT, 2021
** final
** File description:
** my_change_armor
*/

#include "function.h"

void display_armor_helmet(rpg *use)
{
    sfRenderWindow_drawSprite(use->window, \
    use->game.background.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, \
    use->game.map.spaceship.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.hud.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.life.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.shield.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.xp.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->player.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.player.dog.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.model.sprite, NULL);
    sfRenderWindow_drawText(use->window, use->game.hud.pseudo.text, NULL);
    sfRenderWindow_drawText(use->window, use->game.hud.gold.text, NULL);
}

int my_change_armor_helmet(rpg *use, button_set_t new)
{
    display_armor_helmet(use);
    sfRenderWindow_drawSprite(use->window, \
    use->game.inventory.armor.back.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, new.sprite, NULL);
    if (use->game.inventory.helmet.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->game.inventory.helmet.sprite, NULL);
    while (sfRenderWindow_pollEvent(use->window, &use->event)) {
        if (handle_event_change_armor_helmet(use, new) == 1)
            return (1);
    }
    pos_button_detect(use, use->game.inventory.armor.annuler, \
    position(830, 750), position(1100, 805));
    pos_button_detect(use, use->game.inventory.armor.one, \
    position(564, 457), position(774, 624));
    sfRenderWindow_display(use->window);
    return (0);
}