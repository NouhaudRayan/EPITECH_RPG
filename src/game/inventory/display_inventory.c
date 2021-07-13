/*
** EPITECH PROJECT, 2021
** final
** File description:
** display_inventory
*/

#include "function.h"

void display_invetory(rpg *use)
{
    sfRenderWindow_drawSprite(use->window, use->game.inventory.back.sprite, \
    NULL);
    sfRenderWindow_drawText(use->window, use->game.inventory.one.name.text, \
    NULL);
    sfRenderWindow_drawText(use->window, use->game.inventory.one.damage.text, \
    NULL);
    sfRenderWindow_drawText(use->window, use->game.inventory.one.pp.text, \
    NULL);
    sfRenderWindow_drawText(use->window, use->game.inventory.two.name.text, \
    NULL);
    sfRenderWindow_drawText(use->window, use->game.inventory.two.damage.text, \
    NULL);
    sfRenderWindow_drawText(use->window, use->game.inventory.two.pp.text, \
    NULL);
    if (use->game.inventory.potion_one.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->game.inventory.potion_one.sprite, NULL);
    if (use->game.inventory.potion_two.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->game.inventory.potion_two.sprite, NULL);
    if (use->game.inventory.potion_three.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->game.inventory.potion_three.sprite, NULL);
    if (use->game.inventory.potion_four.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->game.inventory.potion_four.sprite, NULL);
    if (use->game.inventory.potion_five.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->game.inventory.potion_five.sprite, NULL);
    if (use->game.inventory.helmet.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->game.inventory.helmet.sprite, NULL);
    if (use->game.inventory.chesplate.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->game.inventory.chesplate.sprite, NULL);
    if (use->game.inventory.act_1 == 1) {
        sfRenderWindow_drawSprite(use->window, use->game.inventory.action.sprite, NULL);
        pos_button_detect(use, use->game.inventory.potion_one, position(681, 729), position(781, 833));
    }
    if (use->game.inventory.act_1 == 1)
        sfRenderWindow_drawSprite(use->window, use->game.inventory.action.sprite, NULL);
    if (use->game.inventory.act_1 == 1)
        sfRenderWindow_drawSprite(use->window, use->game.inventory.action.sprite, NULL);
    if (use->game.inventory.act_1 == 1)
        sfRenderWindow_drawSprite(use->window, use->game.inventory.action.sprite, NULL);
    if (use->game.inventory.act_1 == 1)
        sfRenderWindow_drawSprite(use->window, use->game.inventory.action.sprite, NULL);
}


/*
if (released_button_detect(use, use->game.inventory.potion_one, position(681, 729), position(781, 833)) == 1) {
        use->game.inventory.act_1 = 1;
        action_potion(use, use->game.inventory.potion_one);
    }
    if (released_button_detect(use, use->game.inventory.potion_two, position(784, 729), position(880, 833)) == 1) {
        use->game.inventory.act_2 = 1;
        action_potion(use, use->game.inventory.potion_two);
    }
    if (released_button_detect(use, use->game.inventory.potion_three, position(883, 729), position(980, 833)) == 1) {
        use->game.inventory.act_3 = 1;
        action_potion(use, use->game.inventory.potion_three);
    }
    if (released_button_detect(use, use->game.inventory.potion_four, position(983, 729), position(1077, 833)) == 1) {
        use->game.inventory.act_4 = 1;
        action_potion(use, use->game.inventory.potion_four);
    }
    if (released_button_detect(use, use->game.inventory.potion_five, position(1080, 729), position(1181, 833)) == 1) {
        use->game.inventory.act_5 = 1;
        action_potion(use, use->game.inventory.potion_five);
    */