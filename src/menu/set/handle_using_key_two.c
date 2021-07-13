/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_using_key_two
*/

#include "function.h"

void handle_mouvement_key_bis(rpg *use)
{
    int temp = 0;

    if (sfMouse_getPositionRenderWindow(use->window).x >= 216 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 336 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 418 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 528)
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.front.sprite, NULL);
    if ((sfMouse_getPositionRenderWindow(use->window).x >= 216 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 336 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 418 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 528 ) &&
        (use->event.type == sfEvtMouseButtonReleased || 
        use->event.type == sfEvtTextEntered)) {
        sfSound_play(use->music.effect.sound);
        memymemou_set(use, use->menu.set.swipe.front_key.content);
        try(use, use->menu.set.swipe.front_key.content);
        sfText_setString(use->menu.set.swipe.front_key.text, use->menu.set.swipe.front_key.content);
        use->files.touch[1] = my_getstr(use->event.key.code - 97);
        use->menu.set.swipe.front.rect.left = 1920;
        sfSprite_setTextureRect(use->menu.set.swipe.front.sprite, use->menu.set.swipe.front.rect);
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.front.sprite, NULL);
    } else {
        use->menu.set.swipe.front.rect.left = 0;
        sfSprite_setTextureRect(use->menu.set.swipe.front.sprite, use->menu.set.swipe.front.rect);
    }
}

void handle_mouvement_key_biss(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 216 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 338 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 550 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 662)
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.back.sprite, NULL);
    if ((sfMouse_getPositionRenderWindow(use->window).x >= 216 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 338 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 550 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 662 ) &&
        (use->event.type == sfEvtMouseButtonReleased || 
        use->event.type == sfEvtTextEntered)) {
        sfSound_play(use->music.effect.sound);
        memymemou_set(use, use->menu.set.swipe.back_key.content);
        try(use, use->menu.set.swipe.back_key.content);
        sfText_setString(use->menu.set.swipe.back_key.text, use->menu.set.swipe.back_key.content);
        use->files.touch[3] = my_getstr(use->event.key.code - 97);
        use->menu.set.swipe.back.rect.left = 1920;
        sfSprite_setTextureRect(use->menu.set.swipe.back.sprite, use->menu.set.swipe.back.rect);
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.back.sprite, NULL);
    } else {
        use->menu.set.swipe.back.rect.left = 0;
        sfSprite_setTextureRect(use->menu.set.swipe.back.sprite, use->menu.set.swipe.back.rect);
    }
}

void handle_mouvement_key_bisss(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 76 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 200 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 550 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 662)
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.left.sprite, NULL);
    if ((sfMouse_getPositionRenderWindow(use->window).x >= 76 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 200 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 550 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 662 ) &&
        (use->event.type == sfEvtMouseButtonReleased || 
        use->event.type == sfEvtTextEntered)) {
        sfSound_play(use->music.effect.sound);
        memymemou_set(use, use->menu.set.swipe.left_key.content);
        try(use, use->menu.set.swipe.left_key.content);
        sfText_setString(use->menu.set.swipe.left_key.text, use->menu.set.swipe.left_key.content);
        use->files.touch[7] = my_getstr(use->event.key.code - 97);
        use->menu.set.swipe.left.rect.left = 1920;
        sfSprite_setTextureRect(use->menu.set.swipe.left.sprite, use->menu.set.swipe.left.rect);
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.left.sprite, NULL);
    } else {
        use->menu.set.swipe.left.rect.left = 0;
        sfSprite_setTextureRect(use->menu.set.swipe.left.sprite, use->menu.set.swipe.left.rect);
    }


}

void handle_key_text(rpg *use)
{
    sfRenderWindow_drawText(use->window, use->menu.set.swipe.front_key.text, NULL);
    sfRenderWindow_drawText(use->window, use->menu.set.swipe.back_key.text, NULL);
    sfRenderWindow_drawText(use->window, use->menu.set.swipe.right_key.text, NULL);
    sfRenderWindow_drawText(use->window, use->menu.set.swipe.left_key.text, NULL);
    sfRenderWindow_drawText(use->window, use->menu.set.swipe.map_key.text, NULL);
    sfRenderWindow_drawText(use->window, use->menu.set.swipe.inventory_key.text, NULL);
    sfRenderWindow_drawText(use->window, use->menu.set.swipe.used_key.text, NULL);
}