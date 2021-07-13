/*
** EPITECH PROJECT, 2021
** game
** File description:
** handle_space_and_pause_choice
*/

#include "function.h"

void put_good_pos_pause_three(rpg *use)
{
    sfSprite_setPosition(use->game.pause.off_green.sprite, \
    use->game.pause.off_green.pos);
    sfSprite_setPosition(use->game.pause.on_red.sprite, \
    use->game.pause.on_red.pos);
    sfSprite_setPosition(use->game.pause.off_red.sprite, \
    use->game.pause.off_red.pos);
    sfSprite_setPosition(use->game.pause.on_green_down.sprite, \
    use->game.pause.on_green_down.pos);
    sfSprite_setPosition(use->game.pause.off_green_down.sprite, \
    use->game.pause.off_green_down.pos);
    sfSprite_setPosition(use->game.pause.on_red_down.sprite, \
    use->game.pause.on_red_down.pos);
    sfSprite_setPosition(use->game.pause.off_red_down.sprite, \
    use->game.pause.off_red_down.pos);
    sfSprite_setPosition(use->game.pause.sound_barre.sprite, use->game.pause.sound_barre.pos);
}

void put_good_pos_pause_two(rpg *use)
{
    use->game.pause.on_green_down.pos = position((use->player.pos.x - 960) \
    + 682, (use->player.pos.y - 540) + 500);
    use->game.pause.off_green_down.pos = position((use->player.pos.x - 960) \
    + 682, (use->player.pos.y - 540) + 500);
    use->game.pause.on_red_down.pos = position((use->player.pos.x - 960) \
    + 682, (use->player.pos.y - 540) + 500);
    use->game.pause.off_red_down.pos = position((use->player.pos.x - 960) \
    + 682, (use->player.pos.y - 540) + 500);
    sfSprite_setPosition(use->menu.blurry.sprite, use->menu.blurry.pos);
    sfSprite_setPosition(use->game.pause.menu.sprite, \
    use->game.pause.menu.pos);
    sfSprite_setPosition(use->game.pause.red_barre.sprite, \
    use->game.pause.red_barre.pos);
    sfSprite_setPosition(use->game.pause.interface.sprite, \
    use->game.pause.interface.pos);
    sfSprite_setPosition(use->game.pause.barre.sprite, \
    use->game.pause.barre.pos);
    sfSprite_setPosition(use->game.pause.on_green.sprite, \
    use->game.pause.on_green.pos);
    put_good_pos_pause_three(use);
}

void put_good_pos_pause(rpg *use)
{
    use->menu.blurry.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.pause.menu.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.pause.sound_barre.pos = position((use->player.pos.x - 960) + 2, \
    (use->player.pos.y - 540) + 3);
    use->game.pause.interface.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.pause.red_barre.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.pause.barre.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.pause.on_green.pos = position((use->player.pos.x - 960) + 682, \
    (use->player.pos.y - 540) + 377);
    use->game.pause.off_green.pos = position((use->player.pos.x - 960) + 682, \
    (use->player.pos.y - 540) + 377);
    use->game.pause.on_red.pos = position((use->player.pos.x - 960) + 682, \
    (use->player.pos.y - 540) + 377);
    use->game.pause.off_red.pos = position((use->player.pos.x - 960) + 682, \
    (use->player.pos.y - 540) + 377);
    put_good_pos_pause_two(use);
}

void handle_pause_choice(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1820 && \
    sfMouse_getPositionRenderWindow(use->window).x <= 1890 && \
    sfMouse_getPositionRenderWindow(use->window).y >= 25 && \
    sfMouse_getPositionRenderWindow(use->window).y <= 100 && \
    use->event.type == sfEvtMouseButtonPressed) {
        sfSound_play(use->music.effect.sound);
        use->game.hud.pause.rect.width = 3840;
        sfSprite_setTextureRect(use->game.hud.pause.sprite, \
        use->game.hud.pause.rect);
        sfRenderWindow_drawSprite(use->window, use->game.hud.pause.sprite, \
        NULL);
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1820 && \
    sfMouse_getPositionRenderWindow(use->window).x <= 1890 && \
    sfMouse_getPositionRenderWindow(use->window).y >= 25 && \
    sfMouse_getPositionRenderWindow(use->window).y <= 100 && \
    use->event.type == sfEvtMouseButtonReleased) {
        use->game.map.boolean = 0;
        use->game.pause.boolean = 1;
        put_good_pos_pause(use);
    }
}

void handle_space_and_pause_choice(rpg *use)
{
    if (use->game.map.map[use->game.map.y_p] \
    [use->game.map.x_p - 1] == 'V' && use->event.key.code \
    == atoi(use->files.touch[11]) && use->event.type == sfEvtKeyReleased) {
        use->game.space.spaceship.pos = use->player.pos;
        sfSprite_setPosition(use->game.space.spaceship.sprite, \
        use->game.space.spaceship.pos);
        use->game.space.boolean = 1;
        use->game.map.boolean = 0;
    }
    handle_pause_choice(use);
}