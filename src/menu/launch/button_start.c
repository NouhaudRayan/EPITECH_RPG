/*
** EPITECH PROJECT, 2021
** button start
** File description:
** button_start
*/

#include "function.h"

int button_start(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 522 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1401 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 532 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 652
    && use->event.type == sfEvtMouseButtonPressed) {
        sfSound_play(use->music.effect.sound);
        if (use->menu.launch.play.rect.left != 1920) {
            use->menu.launch.play.rect.left += 1920;
            sfSprite_setTextureRect(use->menu.launch.play.sprite, use->menu.launch.play.rect);
        }
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 522 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1401 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 532 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 652
    && use->event.type == sfEvtMouseButtonReleased) {
        sfSound_stop(use->music.menu.sound);
        sfSound_play(use->music.main_theme.sound);
        use->music.main_t = 1;
        while (use->load.barre.rect.width < 1920 && my_loading(use) == 0);
        use->game.map.boolean = 1;
        use->game.exit = 0;
        use->menu.launch.close = 1;
        use->menu.launch.boolean = 0;
        return (1);
    }
    return (0);
}