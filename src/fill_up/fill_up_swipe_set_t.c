/*
** EPITECH PROJECT, 2021
** final
** File description:
** fill_up_swipe_set_t
*/

#include "function.h"

void meme_set(rpg *use, char *text)
{
    for (int i = 0; i < 1; i++)
        text[i] = '\0';
}

void fill_text(rpg *use)
{
  use->menu.set.swipe.front_key.content = malloc(sizeof(char) * 1);
  use->menu.set.swipe.back_key.content = malloc(sizeof(char) * 1);
  use->menu.set.swipe.left_key.content = malloc(sizeof(char) * 1);
  use->menu.set.swipe.right_key.content = malloc(sizeof(char) * 1);
  use->menu.set.swipe.map_key.content = malloc(sizeof(char) * 1);
  use->menu.set.swipe.inventory_key.content = malloc(sizeof(char) * 1);
  use->menu.set.swipe.used_key.content = malloc(sizeof(char) * 1);
  text_set(&use->menu.set.swipe.front_key, "Z",
  position(260, 443), colors(255, 255, 255), 50); //moit - 30
  text_set(&use->menu.set.swipe.back_key, "S",
  position(260, 576), colors(255, 255, 255), 50);
  text_set(&use->menu.set.swipe.left_key, "Q",
  position(123, 576), colors(255, 255, 255), 50);
  text_set(&use->menu.set.swipe.right_key, "D",
  position(402, 576), colors(255, 255, 255), 50);
  text_set(&use->menu.set.swipe.map_key, "M",
  position(60, 865), colors(255, 255, 255), 50);
  text_set(&use->menu.set.swipe.inventory_key, "I",
  position(266, 865), colors(255, 255, 255), 50);
  text_set(&use->menu.set.swipe.used_key, "E",
  position(475, 865), colors(255, 255, 255), 50);
}

void fill_up_set_swipe_two(rpg *use)
{
    button_set(&use->menu.set.swipe.back, \
    "sprites/hud/menu/recule.png", dimension(0, 0, 1920, 1080), \
    position(-10, 0));
    button_set(&use->menu.set.swipe.left, \
    "sprites/hud/menu/left.png", dimension(0, 0, 1920, 1080), \
    position(-8, 0));
    button_set(&use->menu.set.swipe.right, \
    "sprites/hud/menu/right.png", dimension(0, 0, 1920, 1080), \
    position(-9, 0));
    button_set(&use->menu.set.swipe.map, \
    "sprites/hud/menu/map.png", dimension(0, 0, 1920, 1080), \
    position(-9, 0));
    button_set(&use->menu.set.swipe.inventory, \
    "sprites/hud/menu/inventory.png", dimension(0, 0, 1920, 1080), \
    position(-9, 0));
    button_set(&use->menu.set.swipe.used, \
    "sprites/hud/menu/used.png", dimension(0, 0, 1920, 1080), \
    position(-9, 0));
}

void fill_up_set_swipe(rpg *use)
{
    fill_text(use);
    use->menu.set.swipe.boolean = 0;
    background_set(&use->menu.set.swipe.hud, \
    "sprites/hud/menu/swipeleft.png", dimension(0, 0, 1920, 1080), \
    position(-610, 0));
    button_set(&use->menu.set.swipe.resolution_l, \
    "sprites/hud/menu/resolution_left.png", dimension(0, 0, 1920, 1080), \
    position(-10, 0));
    button_set(&use->menu.set.swipe.resolution_r, \
    "sprites/hud/menu/resolution_right.png", dimension(0, 0, 1920, 1080), \
    position(-10, 0));
    button_set(&use->menu.set.swipe.front, \
    "sprites/hud/menu/avance.png", dimension(0, 0, 1920, 1080), \
    position(-10, 0));
    fill_up_set_swipe_two(use);
}