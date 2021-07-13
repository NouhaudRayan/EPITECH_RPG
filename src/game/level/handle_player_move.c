/*
** EPITECH PROJECT, 2021
** game
** File description:
** handle_player_move
*/

#include "function.h"

void handle_player_up_move(rpg *use)
{
    if (use->event.key.code == atoi(use->files.touch[1]) && \
    use->event.type == sfEvtKeyPressed && use->game.map.map\
    [use->game.map.y_p - 1][use->game.map.x_p] == '_') {
        use->game.map.y_p--;
        use->player.pos.y -= 32;
        sfView_move(use->game.view, position(0, -32));
        move_hud(use, 0, -32);
        sfSprite_setPosition(use->player.sprite, \
        use->player.pos);
        use->game.player.dog.pos.y -= 32;
        sfSprite_setPosition(use->game.player.dog.sprite, \
        use->game.player.dog.pos);
        handle_animation_move_player(use, 2);
    }
}

void handle_player_updown_move(rpg *use)
{
    handle_player_up_move(use);
    if (use->event.key.code == atoi(use->files.touch[3]) && \
    use->event.type == sfEvtKeyPressed && use->game.map.map\
    [use->game.map.y_p + 1][use->game.map.x_p] == '_') {
        use->game.map.y_p++;
        use->player.pos.y += 32;
        sfView_move(use->game.view, position(0, 32));
        move_hud(use, 0, 32);
        sfSprite_setPosition(use->player.sprite, \
        use->player.pos);
        use->game.player.dog.pos.y += 32;
        sfSprite_setPosition(use->game.player.dog.sprite, \
        use->game.player.dog.pos);
        handle_animation_move_player(use, 1);
    }
}

void handle_player_left_move(rpg *use)
{
    if (use->event.key.code == atoi(use->files.touch[7]) && \
    use->event.type == sfEvtKeyPressed && use->game.map.map\
    [use->game.map.y_p][use->game.map.x_p - 1] == '_') {
        use->game.map.x_p--;
        use->player.pos.x -= 32;
        sfView_move(use->game.view, position(-32, 0));
        move_hud(use, -32, 0);
        sfSprite_setPosition(use->player.sprite, \
        use->player.pos);
        use->game.player.dog.pos.x -= 32;
        sfSprite_setPosition(use->game.player.dog.sprite, \
        use->game.player.dog.pos);
        handle_animation_move_player(use, 4);
    }
}

void handle_player_rightleft_move(rpg *use)
{
    if (use->event.key.code == atoi(use->files.touch[5]) && \
    use->event.type == sfEvtKeyPressed && use->game.map.map\
    [use->game.map.y_p] [use->game.map.x_p + 1] == '_') {
        use->game.map.x_p++;
        use->player.pos.x += 32;
        sfView_move(use->game.view, position(32, 0));
        move_hud(use, 32, 0);
        sfSprite_setPosition(use->player.sprite, \
        use->player.pos);
        use->game.player.dog.pos.x += 32;
        sfSprite_setPosition(use->game.player.dog.sprite, \
        use->game.player.dog.pos);
        handle_animation_move_player(use, 3);
    }
    handle_player_left_move(use);
}