/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_event_inventory
*/

#include "function.h"

void action_potion(rpg *use, button_set_t potion)
{
    pressed_button_detect(use, &potion, position(33, 284), position(411, 487));
    pressed_button_detect(use, &potion, position(33, 456), position(583, 487));
    if (released_button_detect(use, potion, position(35, 456), position(488, 583)) == 1) {
        use->game.inventory.act_1 = 0;
        use->game.inventory.act_2 = 0;
        use->game.inventory.act_3 = 0;
        use->game.inventory.act_4 = 0;
        use->game.inventory.act_5 = 0;
    }
    if (released_button_detect(use, potion, position(35, 284), position(488, 411)) == 1) {
        if (potion.type == 1)
            use->player.life += 50;
        if (potion.type == 2)
            use->player.shield += 50;
        if (potion.type == 3)
            use->player.xp += 30;
    }
}

int handle_event_inventory(rpg *use)
{
    if (use->event.type == sfEvtClosed) {
        use->close = 1;
        use->game.exit = 1;
        use->game.inventory.boolean = 0;
        return (1);
    }
    if ((use->event.key.code == atoi(use->files.touch[13]) && \
    use->event.type == sfEvtKeyReleased) || (use->event.key.code == \
    sfKeyEscape && use->event.type == sfEvtKeyReleased)) {
        use->game.inventory.back.pos = position(use->player.pos.x - 960, \
        use->player.pos.y - 540);
        use->game.map.boolean = 1;
        use->game.inventory.boolean = 0;
    }
    if (use->game.inventory.potion_one.boolean == 1 && released_button_detect(use, use->game.inventory.potion_one, position(681, 729), position(781, 833)) == 1)        use->game.inventory.act_1 = 1;
        use->game.inventory.act_1 = 1;
    if (use->game.inventory.potion_two.boolean == 1 && released_button_detect(use, use->game.inventory.potion_two, position(784, 729), position(880, 833)) == 1)
        use->game.inventory.act_2 = 1;
    if (use->game.inventory.potion_three.boolean == 1 && released_button_detect(use, use->game.inventory.potion_three, position(883, 729), position(980, 833)) == 1)
        use->game.inventory.act_3 = 1;
    if (use->game.inventory.potion_four.boolean == 1 && released_button_detect(use, use->game.inventory.potion_four, position(983, 729), position(1077, 833)) == 1)
        use->game.inventory.act_4 = 1;
    if (use->game.inventory.potion_five.boolean == 1 && released_button_detect(use, use->game.inventory.potion_five, position(1080, 729), position(1181, 833)) == 1)
        use->game.inventory.act_5 = 1;
    if (use->game.inventory.act_1 == 1)
        action_potion(use, use->game.inventory.potion_one);
    if (use->game.inventory.act_2 == 1)
        action_potion(use, use->game.inventory.potion_two);
    if (use->game.inventory.act_3 == 1)
        action_potion(use, use->game.inventory.potion_three);
    if (use->game.inventory.act_4 == 1)
        action_potion(use, use->game.inventory.potion_four);
    if (use->game.inventory.act_5 == 1)
        action_potion(use, use->game.inventory.potion_five);
    return (0);
}