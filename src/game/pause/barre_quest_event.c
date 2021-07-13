/*
** EPITECH PROJECT, 2021
** quest event barre
** File description:
** sous fonction
*/

#include "function.h"

void change_boolean_quest(rpg *use)
{
    use->game.pause.touch.boolean = 0;
    use->game.pause.sounds.boolean = 0;
    use->game.pause.achievement.boolean = 0;
    use->game.pause.inventory.boolean = 0;
    use->game.pause.profil.boolean = 0;
    use->game.pause.touch.boolean = 0;
    use->game.pause.quest.boolean = 1;
}

void quest_event_barre(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 485 && sfMouse_getPositionRenderWindow(use->window).x <= 680 && sfMouse_getPositionRenderWindow(use->window).y >= 70 && sfMouse_getPositionRenderWindow(use->window).y <= 150 && use->event.type == sfEvtMouseButtonPressed)
    {
        sfRenderWindow_drawSprite(use->window, use->game.pause.red_barre.sprite, NULL);
        use->game.pause.red_barre.rect.left = 0;
        use->game.pause.red_barre.rect.top = 1080;
        sfSprite_setTextureRect(use->game.pause.red_barre.sprite, use->game.pause.red_barre.rect);
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 485 && sfMouse_getPositionRenderWindow(use->window).x <= 680 && sfMouse_getPositionRenderWindow(use->window).y >= 70 && sfMouse_getPositionRenderWindow(use->window).y <= 150 && use->event.type == sfEvtMouseButtonReleased)
    {
        change_boolean_quest(use);
        // sfSound_play(use->menu.effect.sound);
        if (use->game.pause.interface.rect.left < 3840)
            while (use->game.pause.interface.rect.left != 3840 && animation_pause(use, 20) == 0)
                ;
        else
            while (use->game.pause.interface.rect.left != 3840 && animation_pause(use, -20) == 0)
                ;
        use->game.pause.play.boolean = 2;
        use->game.pause.red_barre.rect.top = 0;
    }
}