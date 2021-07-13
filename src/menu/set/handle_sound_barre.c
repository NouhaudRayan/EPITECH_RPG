/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_sound_barre
*/

#include "function.h"

void handle_sound_barre(rpg *use)
{
    if (use->event.mouseButton.x >= 830 && use->event.mouseButton.x <= 1530
    && use->event.mouseButton.y >= 897 && use->event.mouseButton.y <= 981 && use->event.type == sfEvtMouseButtonPressed) {
        sfSound_play(use->music.effect.sound);
        use->menu.set.sound.boolean = 1;
    }
    if (use->menu.set.sound.boolean == 1 && use->event.type == sfEvtMouseButtonReleased) {
        use->menu.set.sound.boolean = 0;
    }
    if (use->menu.set.sound.boolean == 1) {
        if (sfMouse_getPositionRenderWindow(use->window).x <= 1530 && sfMouse_getPositionRenderWindow(use->window).x > 830)
            use->menu.set.sound.rect.width = sfMouse_getPositionRenderWindow(use->window).x - 830;
        sfSprite_setTextureRect(use->menu.set.sound.sprite, use->menu.set.sound.rect);
    }
}