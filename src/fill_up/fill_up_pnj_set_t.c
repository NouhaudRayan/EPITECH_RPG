/*
** EPITECH PROJECT, 2021
** final
** File description:
** fill_up_space_set_t
*/

#include "function.h"

void fill_up_pnj_set_t(rpg *use)
{
    use->game.player.text.content = NULL;
    use->game.player.box.boolean = 0;
    use->game.player.finish_bear = 0;
    use->game.player.finish_seed = 0;
    use->game.player.bear_text = "anww thank you very much,#Here is a little gift to thank you";
    use->game.player.seed_text = "anww thank you very much,#Now i can continue to farm";
    text_set(&use->game.player.text, \
    use->game.player.text.content, position(50, 840), \
    colors(0, 0, 0), 50);
    button_set(&use->game.player.box, \
    "sprites/hud/pnj_box/box.png", dimension(0, 0, 1920, 1080), \
    position(0, 0));
}