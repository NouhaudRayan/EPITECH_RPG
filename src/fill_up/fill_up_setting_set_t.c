/*
** EPITECH PROJECT, 2021
** final
** File description:
** fill_up_setting_set_t
*/

#include "function.h"

void fill_up_setting_set_t_two(rpg *use)
{
    button_set(&use->menu.set.fps, "sprites/hud/menu/fps.png", \
    dimension(0, 0, 1920, 1080), position(0, 6));
    button_set(&use->menu.set.difficult, "sprites/hud/menu/lvl.png", \
    dimension(0, 0, 1920, 1080), position(0, 6));
    button_set(&use->menu.set.big_a, "sprites/hud/menu/big.png", \
    dimension(0, 0, 1920, 1080), position(0, 6));
    button_set(&use->menu.set.sound, "sprites/hud/menu/sound_barre.png", \
    dimension(0, 0, 700, 83), position(830, 897));
    use->menu.set.fps.rect.left = 1920;
    sfSprite_setTextureRect(use->menu.set.fps.sprite, use->menu.set.fps.rect);
    button_set(&use->menu.set.resolution, "sprites/hud/menu/resolution.png", dimension(0 ,0, 1920, 1080), position(0, 6));
    button_set(&use->menu.set.resolution_l, "sprites/hud/menu/resolution_left.png", dimension(0 ,0, 1920, 1080), position(0, 6));
    button_set(&use->menu.set.resolution_r, "sprites/hud/menu/resolution_right.png", dimension(0 ,0, 1920, 1080), position(0, 6));
}

void fill_up_setting_set_t(rpg *use)
{
    use->menu.set.boolean = 0;
    text_set(&use->menu.set.nb, my_getstr(use->volume), position(1145, 905), \
    colors(255, 255, 255), 50);
    sfText_setCharacterSize(use->menu.set.nb.text, 60);
    button_set(&use->menu.set.difficult_l, "sprites/hud/menu/arrow_h_g.png", \
    dimension(0, 0, 1920, 1080), position(2, 0));
    button_set(&use->menu.set.difficult_r, "sprites/hud/menu/arrow_h_d.png", \
    dimension(0, 0, 1920, 1080), position(2, 0));
    button_set(&use->menu.set.fps_l, "sprites/hud/menu/arrow_b_g.png", \
    dimension(0, 0, 1920, 1080), position(2, 0));
    button_set(&use->menu.set.fps_r, "sprites/hud/menu/arrow_b_d.png", \
    dimension(0, 0, 1920, 1080), position(2, 0));
    fill_up_setting_set_t_two(use);
}