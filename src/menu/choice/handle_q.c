/*
** EPITECH PROJECT, 2021
** handle q
** File description:
** handle_q
*/

#include "function.h"

void handle_q(rpg *use)
{
    if (use->event.key.code == sfKeyQ && use->event.type == sfEvtKeyReleased)    {
        use->menu.choose.captaine_america.rect.left = 0;
        use->menu.choose.iron_man.rect.left = 0;
        use->menu.choose.the_thor.rect.left = 0;
        use->menu.choose.sure.boolean = 0;
        sfSprite_setTextureRect(use->menu.choose.captaine_america.sprite, use->menu.choose.captaine_america.rect);
        sfSprite_setTextureRect(use->menu.choose.iron_man.sprite, use->menu.choose.iron_man.rect);
        sfSprite_setTextureRect(use->menu.choose.the_thor.sprite, use->menu.choose.the_thor.rect);
    }
}