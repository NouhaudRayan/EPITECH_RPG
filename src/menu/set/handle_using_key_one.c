/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_using_key_one
*/

#include "function.h"

void handle_using_key_biss(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 424 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 546 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 830 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 994)
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.used.sprite, NULL);
    if ((sfMouse_getPositionRenderWindow(use->window).x >= 424 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 546 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 830 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 994 ) &&
        (use->event.type == sfEvtMouseButtonReleased || 
        use->event.type == sfEvtTextEntered)) {
        sfSound_play(use->music.effect.sound);
        memymemou_set(use, use->menu.set.swipe.used_key.content);
        try(use, use->menu.set.swipe.used_key.content);
        sfText_setString(use->menu.set.swipe.used_key.text, use->menu.set.swipe.used_key.content);
        use->files.touch[11] = my_getstr(use->event.key.code - 97);
        use->menu.set.swipe.used.rect.left = 1920;
        sfSprite_setTextureRect(use->menu.set.swipe.used.sprite, use->menu.set.swipe.used.rect);
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.used.sprite, NULL);
    } else {
        use->menu.set.swipe.used.rect.left = 0;
        sfSprite_setTextureRect(use->menu.set.swipe.used.sprite, use->menu.set.swipe.used.rect);
    }
}

void handle_using_key_bis(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 218 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 334 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 830 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 994)
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.inventory.sprite, NULL);
    if ((sfMouse_getPositionRenderWindow(use->window).x >= 218 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 334 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 830 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 994 ) &&
        (use->event.type == sfEvtMouseButtonReleased || 
        use->event.type == sfEvtTextEntered)) {
        sfSound_play(use->music.effect.sound);
        memymemou_set(use, use->menu.set.swipe.inventory_key.content);
        try(use, use->menu.set.swipe.inventory_key.content);
        sfText_setString(use->menu.set.swipe.inventory_key.text, use->menu.set.swipe.inventory_key.content);
        use->files.touch[13] = my_getstr(use->event.key.code - 97);
        use->menu.set.swipe.inventory.rect.left = 1920;
        sfSprite_setTextureRect(use->menu.set.swipe.inventory.sprite, use->menu.set.swipe.inventory.rect);
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.inventory.sprite, NULL);
    } else {
        use->menu.set.swipe.inventory.rect.left = 0;
        sfSprite_setTextureRect(use->menu.set.swipe.inventory.sprite, use->menu.set.swipe.inventory.rect);
    }
}

void handle_using_key(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 10 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 130 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 830 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 994) {
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.map.sprite, NULL);
        }
    if ((sfMouse_getPositionRenderWindow(use->window).x >= 10 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 130 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 830 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 994) &&
        (use->event.type == sfEvtMouseButtonReleased || 
        use->event.type == sfEvtTextEntered)) {
        sfSound_play(use->music.effect.sound);
        memymemou_set(use, use->menu.set.swipe.map_key.content);
        try(use, use->menu.set.swipe.map_key.content);
        sfText_setString(use->menu.set.swipe.map_key.text, use->menu.set.swipe.map_key.content);
        use->files.touch[9] = my_getstr(use->event.key.code - 97);
        use->menu.set.swipe.map.rect.left = 1920;
        sfSprite_setTextureRect(use->menu.set.swipe.map.sprite, use->menu.set.swipe.map.rect);
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.map.sprite, NULL);
    } else {
        use->menu.set.swipe.map.rect.left = 0;
        sfSprite_setTextureRect(use->menu.set.swipe.map.sprite, use->menu.set.swipe.map.rect);
    }
}

void handle_mouvement_key(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 356 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 478 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 550 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 662)
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.right.sprite, NULL);
    if ((sfMouse_getPositionRenderWindow(use->window).x >= 356 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 478 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 550 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 662 ) &&
        (use->event.type == sfEvtMouseButtonReleased || 
        use->event.type == sfEvtTextEntered)) {
        sfSound_play(use->music.effect.sound);
        memymemou_set(use, use->menu.set.swipe.right_key.content);
        try(use, use->menu.set.swipe.right_key.content);
        sfText_setString(use->menu.set.swipe.right_key.text, use->menu.set.swipe.right_key.content);
        use->files.touch[5] = my_getstr(use->event.key.code - 97);
        use->menu.set.swipe.right.rect.left = 1920;
        sfSprite_setTextureRect(use->menu.set.swipe.right.sprite, use->menu.set.swipe.right.rect);
        sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.right.sprite, NULL);
    } else {
        use->menu.set.swipe.right.rect.left = 0;
        sfSprite_setTextureRect(use->menu.set.swipe.right.sprite, use->menu.set.swipe.right.rect);
    }

}

void handle_key_swipe(rpg *use)
{
    handle_mouvement_key(use);
    handle_mouvement_key_bis(use);
    handle_mouvement_key_biss(use);
    handle_mouvement_key_bisss(use);
    handle_using_key(use);
    handle_using_key_bis(use);
    handle_using_key_biss(use);
}