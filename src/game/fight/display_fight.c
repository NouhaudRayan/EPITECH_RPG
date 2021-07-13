/*
** EPITECH PROJECT, 2021
** game
** File description:
** display_fight
*/

#include "function.h"

void display_arrow_condition(rpg *use)
{
    if (use->game.fight.pop_arrow.boolean == 0) {
        sfRenderWindow_drawSprite(use->window, use->game.fight.arrow.sprite, \
        NULL);
    } else {
        sfRenderWindow_drawSprite(use->window, use->game.fight.pop_up.sprite, \
        NULL); 
        sfRenderWindow_drawSprite(use->window, \
        use->game.fight.pop_arrow.sprite, NULL);   
        sfRenderWindow_drawText(use->window, use->game.fight.attack1.text, \
        NULL);
        sfRenderWindow_drawText(use->window, use->game.fight.attack2.text, \
        NULL);
        sfRenderWindow_drawText(use->window, use->game.fight.pp_1.text, \
        NULL);
        sfRenderWindow_drawText(use->window, use->game.fight.pp_2.text, \
        NULL);
        sfRenderWindow_drawText(use->window, use->game.fight.dmg_1.text, \
        NULL);
        sfRenderWindow_drawText(use->window, use->game.fight.dmg_2.text, \
        NULL);
    }
}

void display_fight(rpg *use)
{
    sfRenderWindow_drawSprite(use->window, use->game.fight.back.sprite, NULL);
    display_arrow_condition(use);
    sfRenderWindow_drawSprite(use->window, use->game.fight.player.sprite, \
    NULL);
    sfRenderWindow_drawSprite(use->window, use->game.fight.ennemi.sprite, \
    NULL);
    sfRenderWindow_drawText(use->window, use->game.fight.order.text, \
    NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.hud.sprite, \
    NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.life.sprite, \
    NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.xp.sprite, \
    NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.shield.sprite, \
    NULL);
}