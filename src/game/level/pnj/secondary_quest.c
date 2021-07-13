/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCY-2-1-myrpg-rayan.nouhaud
** File description:
** secondary_quest
*/

#include "function.h"

void check_distri(rpg *use)
{
    if (use->event.key.code == atoi(use->files.touch[11])
        && use->gold >= 50 && use->game.quest.quest_two == 0
        && use->event.type == sfEvtKeyReleased && (use->game.map.x_p == 84 &&
        use->game.map.y_p == 319) || (use->game.map.x_p == 83 &&
        use->game.map.y_p == 318)) {
            use->game.player.beer = 1;
        }
    if (use->game.player.beer == 1 && use->event.key.code == \
    sfKeyEnter && use->event.type == sfEvtKeyReleased) {
       use->gold -= 50;
       sfText_setString(use->game.hud.gold.text, my_getstr(use->gold));
       use->game.quest.quest_three = 1;
       use->game.player.beer = 0;
    }
    
}

void check_seed(rpg *use)
{
    if (use->event.key.code == atoi(use->files.touch[11])
        && use->event.type == sfEvtKeyReleased && (use->game.map.x_p == 230 &&
        use->game.map.y_p == 294) || (use->game.map.x_p == 231 &&
        use->game.map.y_p == 293) || (use->game.map.x_p == 230 &&
        use->game.map.y_p == 292) || (use->game.map.x_p == 229 &&
        use->game.map.y_p == 293))
            use->game.player.want_seed = 1;
    if (use->event.key.code == atoi(use->files.touch[11])
        && use->game.player.want_seed == 1 &&use->event.type == sfEvtKeyReleased && (use->game.map.x_p == 187 &&
        use->game.map.y_p == 330) || (use->game.map.x_p == 188 &&
        use->game.map.y_p == 334) || (use->game.map.x_p == 187 &&
        use->game.map.y_p == 335) || (use->game.map.x_p == 186 &&
        use->game.map.y_p == 334))
            use->game.player.have_seed = 1;
    if (use->event.key.code == atoi(use->files.touch[11])
        && use->game.player.have_seed ==  1 && use->game.player.want_seed == 1
        && use->event.type == sfEvtKeyReleased && (use->game.map.x_p == 230 &&
        use->game.map.y_p == 294) || (use->game.map.x_p == 231 &&
        use->game.map.y_p == 293) || (use->game.map.x_p == 230 &&
        use->game.map.y_p == 292) || (use->game.map.x_p == 229 &&
        use->game.map.y_p == 293))
            use->game.player.finish_seed = 1;
}

void check_quest(rpg *use)
{
    if (use->event.key.code == atoi(use->files.touch[11])
        && use->event.type == sfEvtKeyReleased && (use->game.map.x_p == 201 &&
        use->game.map.y_p == 421) || (use->game.map.x_p == 200 &&
        use->game.map.y_p == 420) || (use->game.map.x_p == 201 &&
        use->game.map.y_p == 419) || (use->game.map.x_p == 203 &&
        use->game.map.y_p == 420))
            use->game.player.want_bear = 1;
    if (use->event.key.code == atoi(use->files.touch[11])
        && use->game.player.have_bear == 1 &&use->event.type == sfEvtKeyReleased
        && (use->game.map.x_p == 256 &&
        use->game.map.y_p == 423) || (use->game.map.x_p == 255 &&
        use->game.map.y_p == 422) || (use->game.map.x_p == 254 &&
        use->game.map.y_p == 423) || (use->game.map.x_p == 255 &&
        use->game.map.y_p == 424))
            use->game.player.have_bear = 1;
    if (use->event.key.code == atoi(use->files.touch[11])
        && use->event.type == sfEvtKeyReleased && (use->game.map.x_p == 201 &&
        use->game.player.want_bear == 1 && use->game.player.have_bear == 1 &&
        use->game.map.y_p == 421) || (use->game.map.x_p == 200 &&
        use->game.map.y_p == 420) || (use->game.map.x_p == 201 &&
        use->game.map.y_p == 419) || (use->game.map.x_p == 203 &&
        use->game.map.y_p == 420))
        use->game.player.finish_bear = 1;
}