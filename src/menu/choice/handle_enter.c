/*
** EPITECH PROJECT, 2021
** handle enter
** File description:
** handle_enter
*/

#include "function.h"

void handle_enter(rpg *use)
{
    if ((use->menu.choose.sure.boolean == 1 &&
        use->event.key.code == sfKeyEnter && use->event.type == sfEvtKeyReleased)) {
        sfSound_play(use->music.effect.sound);
        handle_final_choice(use);
        use->menu.choose.boolean = 0;
        use->menu.launch.boolean = 1;
    } else if ((use->event.key.code == sfKeyEnter && use->event.type == sfEvtKeyReleased)) {
        sfSound_play(use->music.effect.sound);
        use->menu.choose.sure.boolean = 1;
        sfRenderWindow_drawSprite(use->window, use->menu.choose.sure.sprite, NULL);
        if (use->menu.choose.captaine_america.boolean == 1) {
            sfSound_play(use->music.captain.sound);
            if (use->menu.choose.captaine_america.rect.left != 1920) {
                use->menu.choose.captaine_america.rect.left += 1920;
                sfSprite_setTextureRect(use->menu.choose.captaine_america.sprite, use->menu.choose.captaine_america.rect);
            }
        }
        if (use->menu.choose.iron_man.boolean == 1) {
            sfSound_play(use->music.ironman.sound);
            if (use->menu.choose.iron_man.rect.left != 1920) {
                use->menu.choose.iron_man.rect.left += 1920;
                sfSprite_setTextureRect(use->menu.choose.iron_man.sprite, use->menu.choose.iron_man.rect);
            }
        }
        if (use->menu.choose.the_thor.boolean == 1) {
            sfSound_play(use->music.thor.sound);
            if (use->menu.choose.the_thor.rect.left != 1920) {
                use->menu.choose.the_thor.rect.left += 1920;
                sfSprite_setTextureRect(use->menu.choose.the_thor.sprite, use->menu.choose.the_thor.rect);
            }
        }
    }
}