/*
** EPITECH PROJECT, 2021
** achievement sound event
** File description:
** sous fonction
*/

#include "function.h"

void change_boolean_achivement(rpg *use)
{
    use->game.pause.touch.boolean = 0;
    use->game.pause.sounds.boolean = 0;
    use->game.pause.achievement.boolean = 1;
    use->game.pause.inventory.boolean = 0;
    use->game.pause.profil.boolean = 0;
    use->game.pause.touch.boolean = 0;
    use->game.pause.quest.boolean = 0;
}

void achievement_event_barre(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 920 && \
    sfMouse_getPositionRenderWindow(use->window).x <= 1200 && \
    sfMouse_getPositionRenderWindow(use->window).y >= 70 && \
    sfMouse_getPositionRenderWindow(use->window).y <= 150 && \
    use->event.type == sfEvtMouseButtonPressed)
    {
        sfRenderWindow_drawSprite(use->window, \
        use->game.pause.red_barre.sprite, NULL);
        use->game.pause.red_barre.rect.top = 1080;
        sfSprite_setTextureRect(use->game.pause.red_barre.sprite, \
        use->game.pause.red_barre.rect);
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 920 && \
    sfMouse_getPositionRenderWindow(use->window).x <= 1200 && \
    sfMouse_getPositionRenderWindow(use->window).y >= 70 && \
    sfMouse_getPositionRenderWindow(use->window).y <= 150 && \
    use->event.type == sfEvtMouseButtonReleased) {
        change_boolean_achivement(use);
        if (use->game.pause.interface.rect.left < 7680)
            while (use->game.pause.interface.rect.left != 7680 && \
            animation_pause(use, 20) == 0);
        else
            while (use->game.pause.interface.rect.left != 7680 && \
            animation_pause(use, -20) == 0);
        use->game.pause.play.boolean = 4;
        use->game.pause.red_barre.rect.top = 0;
    }
}