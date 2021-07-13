/*
** EPITECH PROJECT, 2021
** sound event barre
** File description:
** sous fonciton
*/

#include "function.h"

void change_boolean_sound(rpg *use)
{
    use->game.pause.touch.boolean = 0;
    use->game.pause.sounds.boolean = 1;
    use->game.pause.achievement.boolean = 0;
    use->game.pause.inventory.boolean = 0;
    use->game.pause.profil.boolean = 0;
    use->game.pause.touch.boolean = 0;
    use->game.pause.quest.boolean = 0;
}

void sound_event_barre(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1200 && sfMouse_getPositionRenderWindow(use->window).x <= 1400 && sfMouse_getPositionRenderWindow(use->window).y >= 70 && sfMouse_getPositionRenderWindow(use->window).y <= 150 && use->event.type == sfEvtMouseButtonPressed) {
        sfRenderWindow_drawSprite(use->window, use->game.pause.red_barre.sprite, NULL);
        use->game.pause.red_barre.rect.top = 1080;
        sfSprite_setTextureRect(use->game.pause.red_barre.sprite, use->game.pause.red_barre.rect);
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1200 && sfMouse_getPositionRenderWindow(use->window).x <= 1400 && sfMouse_getPositionRenderWindow(use->window).y >= 70 && sfMouse_getPositionRenderWindow(use->window).y <= 150 && use->event.type == sfEvtMouseButtonReleased) {
        //sfSound_play(use->menu.effect.sound);
        change_boolean_sound(use);
        if (use->game.pause.interface.rect.left < 9600)
            while (use->game.pause.interface.rect.left != 9600 && animation_pause(use, 20) == 0);
        else
            while (use->game.pause.interface.rect.left != 9600 && animation_pause(use, -20) == 0);
        use->game.pause.play.boolean = 5;
        use->game.pause.red_barre.rect.top = 0;
    }
    if (use->game.pause.interface.rect.left == 9600) {
        if (use->event.mouseButton.x >= 529 && use->event.mouseButton.x <= 1048
        && use->event.mouseButton.y >= 670 && use->event.mouseButton.y <= 738 && use->event.type == sfEvtMouseButtonPressed)
            use->game.pause.sound_barre.boolean = 1;
        if (use->menu.set.sound.boolean == 1 && use->event.type == sfEvtMouseButtonReleased)
            use->game.pause.sound_barre.boolean = 0;
        if (use->game.pause.sound_barre.boolean == 1) {
           if (sfMouse_getPositionRenderWindow(use->window).x <= 1048 && sfMouse_getPositionRenderWindow(use->window).x > 529)
                use->game.pause.sound_barre.rect.width = sfMouse_getPositionRenderWindow(use->window).x;
            sfSprite_setTextureRect(use->game.pause.sound_barre.sprite, use->game.pause.sound_barre.rect);
        }
    }
}