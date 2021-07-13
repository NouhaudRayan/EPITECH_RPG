/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_message_box
*/

#include "function.h"

void handle_message_box(rpg *use)
{
    if (use->game.player.box.boolean == 1) {
        use->game.player.box.pos = position(use->player.pos.x - 960, use->player.pos.y - 540);
        sfSprite_setPosition(use->game.player.box.sprite, use->game.player.box.pos);
        use->game.player.text.pos = position((use->player.pos.x - 960) + 50, (use->player.pos.y - 540) + 840);
        sfText_setPosition(use->game.player.text.text, use->game.player.text.pos);
        while (use->game.player.box.boolean == 1 && my_pnj(use) == 0);
    }
}