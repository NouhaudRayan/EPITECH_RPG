/*
** EPITECH PROJECT, 2021
** fill_up_pause_set_t
** File description:
** sous fonction
*/

#include "function.h"

void fill_up_pause_set_t_four(rpg *use)
{
    if (use->menu.set.swipe.front_key.content[0] >= 'A' && use->menu.set.swipe.front_key.content[0] <= 'Z')
        text_set(&use->game.pause.up, use->menu.set.swipe.front_key.content, position(600, 410), colors(255, 255, 255), 80);
    else
        text_set(&use->game.pause.up, "Z", position(600, 410), colors(255, 255, 255), 80);

    if (use->menu.set.swipe.back_key.content[0] >= 'A' && use->menu.set.swipe.back_key.content[0] <= 'Z')
        text_set(&use->game.pause.back, use->menu.set.swipe.back_key.content, position(600, 540), colors(255, 255, 255), 80);
    else
        text_set(&use->game.pause.back, "S", position(600, 540), colors(255, 255, 255), 80);

    if (use->menu.set.swipe.right_key.content[0] >= 'A' && use->menu.set.swipe.right_key.content[0] <= 'Z')
        text_set(&use->game.pause.right, use->menu.set.swipe.left_key.content, position(740, 460), colors(255, 255, 255), 80);
    else
        text_set(&use->game.pause.right, "D", position(600, 540), colors(255, 255, 255), 80);

    if (use->menu.set.swipe.left_key.content[0] >= 'A' && use->menu.set.swipe.left_key.content[0] <= 'Z')
        text_set(&use->game.pause.left, use->menu.set.swipe.left_key.content, position(460, 560), colors(255, 255, 255), 80);
    else
        text_set(&use->game.pause.left, "Q", position(600, 540), colors(255, 255, 255), 80);

    if (use->menu.set.swipe.map_key.content[0] >= 'A' && use->menu.set.swipe.map_key.content[0] <= 'Z')
        text_set(&use->game.pause.map, use->menu.set.swipe.map_key.content, position(400, 840), colors(255, 255, 255), 80);
    else
        text_set(&use->game.pause.map, "M", position(600, 540), colors(255, 255, 255), 80);

    if (use->menu.set.swipe.inventory_key.content[0] >= 'A' && use->menu.set.swipe.inventory_key.content[0] <= 'Z')
        text_set(&use->game.pause.inventor, use->menu.set.swipe.inventory_key.content, position(600, 840), colors(255, 255, 255), 80);
    else
        text_set(&use->game.pause.inventor, "I", position(600, 540), colors(255, 255, 255), 80);

    if (use->menu.set.swipe.used_key.content[0] >= 'A' && use->menu.set.swipe.used_key.content[0] <= 'Z')
        text_set(&use->game.pause.use, use->menu.set.swipe.used_key.content, position(800, 840), colors(255, 255, 255), 80);
    else
        text_set(&use->game.pause.use, "E", position(600, 540), colors(255, 255, 255), 80);
}

void fill_up_pause_set_t_three(rpg *use)
{
    use->game.quest.quest_one = 0;
    use->game.quest.quest_two = 0;
    use->game.quest.quest_three = 0;
    button_set(&use->game.quest.sprite_one, \
    "sprites/hud/pause/verifie.png", dimension(0, 0, 78, 78), \
    position(978, 410));
    button_set(&use->game.quest.sprite_two, \
    "sprites/hud/pause/verifie.png", dimension(0, 0, 78, 78), \
    position(980, 604));
    button_set(&use->game.quest.sprite_three, \
    "sprites/hud/pause/verifie.png", dimension(0, 0, 78, 78), \
    position(980, 811));
}

void fill_up_pause_set_t_two(rpg *use)
{
    button_set(&use->game.pause.on_red, \
    "sprites/hud/pause/on_red.png", dimension(0, 0, 100, 100), \
    position(682, 377));
    button_set(&use->game.pause.off_red, \
    "sprites/hud/pause/off_red.png", dimension(0, 0, 100, 100), \
    position(682, 378));
    button_set(&use->game.pause.on_green_down, \
    "sprites/hud/pause/on_green.png", dimension(0, 0, 100, 100), \
    position(682, 500));
    button_set(&use->game.pause.off_green_down, \
    "sprites/hud/pause/off_green.png", dimension(0, 0, 100, 100), \
    position(682, 500));
    button_set(&use->game.pause.on_red_down, \
    "sprites/hud/pause/on_red.png", dimension(0, 0, 100, 100), \
    position(682, 500));
    button_set(&use->game.pause.off_red_down, \
    "sprites/hud/pause/off_red.png", dimension(0, 0, 100, 100), \
    position(682, 500));
    use->game.pause.on_green.boolean = 1;
    use->game.pause.on_green_down.boolean = 1;
}

void fill_up_pause_set_t(rpg *use)
{
    background_set(&use->game.pause.menu, \
    "sprites/hud/pause/background.png", dimension(0, 0, 1920, 1080), \
    position(0, 0));
    background_set(&use->game.pause.interface, \
    "sprites/hud/pause/interface.png", dimension(1920, 0, 13440, 1080), \
    position(0, 0));
    background_set(&use->game.pause.red_barre, \
    "sprites/hud/pause/barre.png", dimension(0, 0, 9600, 1080), \
    position(0, 0));
    background_set(&use->game.pause.barre, \
    "sprites/hud/pause/red_barre.png", dimension(0, 0, 9600, 1080), \
    position(0, 0));
    button_set(&use->game.pause.on_green, \
    "sprites/hud/pause/on_green.png", dimension(0, 0, 100, 100), \
    position(682, 377));
    button_set(&use->game.pause.off_green, \
    "sprites/hud/pause/off_green.png", dimension(0, 0, 100, 100), \
    position(682, 377));
    button_set(&use->game.pause.sound_barre, "sprites/hud/pause/sound_barre.png", dimension(0, 0, 1920, 1080), position(0, 0));
    fill_up_pause_set_t_two(use);
    fill_up_pause_set_t_three(use);
}