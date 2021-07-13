/*
** EPITECH PROJECT, 2021
** my pause
** File description:
** sous fonction
*/

#include "function.h"

void handle_boolean_sound(rpg *use)
{
    if (use->game.pause.off_red.boolean == 1) {
        sfRenderWindow_drawSprite(use->window, use->game.pause.off_red.sprite, NULL);
    }
    if (use->game.pause.on_green.boolean == 1) {
        sfRenderWindow_drawSprite(use->window, use->game.pause.on_green.sprite, NULL);
    }
    if (use->game.pause.off_red_down.boolean == 1) {
        sfRenderWindow_drawSprite(use->window, use->game.pause.off_red_down.sprite, NULL);
    }
    if (use->game.pause.on_green_down.boolean == 1) {
        sfRenderWindow_drawSprite(use->window, use->game.pause.on_green_down.sprite, NULL);
    }
}

void handle_inside_to_on(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 688 && sfMouse_getPositionRenderWindow(use->window).x <= 775 && sfMouse_getPositionRenderWindow(use->window).y >= 406 && sfMouse_getPositionRenderWindow(use->window).y <= 450 && use->event.type == sfEvtMouseButtonReleased && use->game.pause.off_red.boolean == 1) {
        use->game.pause.on_green.boolean = 1;
        use->game.pause.off_red.boolean = 0;
    } else if (sfMouse_getPositionRenderWindow(use->window).x >= 688 && sfMouse_getPositionRenderWindow(use->window).x <= 775 && sfMouse_getPositionRenderWindow(use->window).y >= 406 && sfMouse_getPositionRenderWindow(use->window).y <= 450 && use->event.type == sfEvtMouseButtonReleased && use->game.pause.on_green.boolean == 1) {
        use->game.pause.on_green.boolean = 0;
        use->game.pause.off_red.boolean = 1;
    }
}

void handle_inside_to_on_down(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 688 && sfMouse_getPositionRenderWindow(use->window).x <= 775 && sfMouse_getPositionRenderWindow(use->window).y >= 536 && sfMouse_getPositionRenderWindow(use->window).y <= 580 && use->event.type == sfEvtMouseButtonReleased && use->game.pause.off_red_down.boolean == 1) {
        //sfSound_play(use->game.map.main_theme.sound);
        // use->launch.music = 50;
        use->game.pause.on_green_down.boolean = 1;
        use->game.pause.off_red_down.boolean = 0;
    } else if (sfMouse_getPositionRenderWindow(use->window).x >= 688 && sfMouse_getPositionRenderWindow(use->window).x <= 775 && sfMouse_getPositionRenderWindow(use->window).y >= 536 && sfMouse_getPositionRenderWindow(use->window).y <= 580 && use->event.type == sfEvtMouseButtonReleased && use->game.pause.on_green_down.boolean == 1) {
        //sfSound_pause(use->game.map.main_theme.sound);
        // use->launch.music = 0;
        use->game.pause.on_green_down.boolean = 0;
        use->game.pause.off_red_down.boolean = 1;
    }
}

void handle_inside(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 688 && sfMouse_getPositionRenderWindow(use->window).x <= 775 && sfMouse_getPositionRenderWindow(use->window).y >= 406 && sfMouse_getPositionRenderWindow(use->window).y <= 450 && use->game.pause.on_green.boolean == 1) {
        sfRenderWindow_drawSprite(use->window, use->game.pause.on_red.sprite, NULL);
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 688 && sfMouse_getPositionRenderWindow(use->window).x <= 775 && sfMouse_getPositionRenderWindow(use->window).y >= 406 && sfMouse_getPositionRenderWindow(use->window).y <= 450 && use->game.pause.off_red.boolean == 1) {
        sfRenderWindow_drawSprite(use->window, use->game.pause.off_green.sprite, NULL);
    }
}

void handle_inside_down(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 688 && sfMouse_getPositionRenderWindow(use->window).x <= 775 && sfMouse_getPositionRenderWindow(use->window).y >= 536 && sfMouse_getPositionRenderWindow(use->window).y <= 580 && use->game.pause.on_green_down.boolean == 1) {
        sfRenderWindow_drawSprite(use->window, use->game.pause.on_red_down.sprite, NULL);
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 688 && sfMouse_getPositionRenderWindow(use->window).x <= 775 && sfMouse_getPositionRenderWindow(use->window).y >= 536 && sfMouse_getPositionRenderWindow(use->window).y <= 580 && use->game.pause.off_red_down.boolean == 1) {
        sfRenderWindow_drawSprite(use->window, use->game.pause.off_green_down.sprite, NULL);
    }
}

int my_pause(rpg *use)
{
    animation_blurry(use);
    sfRenderWindow_drawSprite(use->window, use->game.pause.menu.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.pause.interface.sprite, NULL);
    while (sfRenderWindow_pollEvent(use->window, &use->event)) {
        handle_inside_to_on(use);
        handle_inside_to_on_down(use);
        if (handle_pause_event(use) == 1)
            return (1);
    }
    green_barre_handle(use);
    red_barre_handle(use);
    if (use->game.pause.interface.rect.left == 9600) {
        sfRenderWindow_drawSprite(use->window, use->game.pause.sound_barre.sprite, NULL);
        handle_boolean_sound(use);
        handle_inside(use);
        handle_inside_down(use);
    }
    sfRenderWindow_display(use->window);
    return (0);
}