/*
** EPITECH PROJECT, 2021
** touche event barre
** File description:
** sous fonction
*/

#include "function.h"

void change_boolean_touch(rpg *use)
{
    use->game.pause.touch.boolean = 1;
    use->game.pause.sounds.boolean = 0;
    use->game.pause.achievement.boolean = 0;
    use->game.pause.inventory.boolean = 0;
    use->game.pause.profil.boolean = 0;
    use->game.pause.touch.boolean = 0;
    use->game.pause.quest.boolean = 0;
}

void touch_event_barre(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1400 && sfMouse_getPositionRenderWindow(use->window).x <= 1575 && sfMouse_getPositionRenderWindow(use->window).y >= 70 && sfMouse_getPositionRenderWindow(use->window).y <= 150 && use->event.type == sfEvtMouseButtonPressed)
    {
        sfRenderWindow_drawSprite(use->window, use->game.pause.red_barre.sprite, NULL);
        use->game.pause.red_barre.rect.top = 1080;
        sfSprite_setTextureRect(use->game.pause.red_barre.sprite, use->game.pause.red_barre.rect);
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1400 && sfMouse_getPositionRenderWindow(use->window).x <= 1575 && sfMouse_getPositionRenderWindow(use->window).y >= 70 && sfMouse_getPositionRenderWindow(use->window).y <= 150 && use->event.type == sfEvtMouseButtonReleased)
    {
        // sfSound_play(use->menu.effect.sound);
        change_boolean_touch(use);
        if (use->game.pause.interface.rect.left < 11520)
            while (use->game.pause.interface.rect.left != 11520 && animation_pause(use, 20) == 0)
                ;
        else
            while (use->game.pause.interface.rect.left != 11520 && animation_pause(use, -20) == 0)
                ;
        use->game.pause.play.boolean = 6;
        use->game.pause.red_barre.rect.top = 0;
    }
}