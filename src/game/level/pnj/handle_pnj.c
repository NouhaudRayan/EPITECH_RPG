/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_pnj
*/

#include "function.h"

/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_pnj
*/

#include "function.h"

void handle_pnj_top(rpg*use)
{
    if (use->event.key.code == atoi(use->files.touch[11])
    && use->event.type == sfEvtKeyReleased
    && ((use->game.map.map[use->game.map.y_p - 1][use->game.map.x_p] \
    == 'S' && use->player.rect.top == 100) ||
    (use->game.map.map[use->game.map.y_p + 1][use->game.map.x_p]  \
    == 'S' && use->player.rect.top == 0) ||
    (use->game.map.map[use->game.map.y_p][use->game.map.x_p + 1] \
    == 'S' && use->player.rect.top == 150) ||
    (use->game.map.map[use->game.map.y_p][use->game.map.x_p - 1] \
    == 'S' && use->player.rect.top == 50 ))) {
        use->game.player.box.boolean = 1;
        use->game.player.type = 'S';
        use->game.player.texte = use->files.png_secondary;
        pnj_rng(use);
    }
}

void handle_pnj_bottom(rpg *use)
{
    if (use->event.key.code == atoi(use->files.touch[11])
    && use->event.type == sfEvtKeyReleased
    && ((use->game.map.map[use->game.map.y_p - 1][use->game.map.x_p] \
    == 'H' && use->player.rect.top == 100 )||
    (use->game.map.map[use->game.map.y_p + 1][use->game.map.x_p]  \
    == 'H' && use->player.rect.top == 0 ) ||
    (use->game.map.map[use->game.map.y_p][use->game.map.x_p + 1] \
    == 'H' && use->player.rect.top == 150 ) ||
    (use->game.map.map[use->game.map.y_p][use->game.map.x_p - 1] \
    == 'H' && use->player.rect.top == 50 ))) {
        use->game.player.box.boolean = 1;
        use->game.player.texte = use->files.png_history;
        use->game.player.type = 'H';
        pnj_rng(use);
    }
}

void good_pos_shop(rpg *use)
{
    use->game.shop.back.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.shop.black.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.shop.selection_r.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.shop.selection_v.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.shop.blackselec_r.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.shop.blackselec_v.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.shop.money.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    use->game.shop.place.pos = position(use->player.pos.x - 960, \
    use->player.pos.y - 540);
    sfSprite_setPosition(use->game.shop.back.sprite, use->game.shop.back.pos);
    sfSprite_setPosition(use->game.shop.blackselec_v.sprite, use->game.shop.blackselec_v.pos);
    sfSprite_setPosition(use->game.shop.blackselec_r.sprite, use->game.shop.blackselec_r.pos);
    sfSprite_setPosition(use->game.shop.black.sprite, use->game.shop.black.pos);
    sfSprite_setPosition(use->game.shop.selection_r.sprite, use->game.shop.selection_r.pos);
    sfSprite_setPosition(use->game.shop.selection_v.sprite, use->game.shop.selection_v.pos);
    sfSprite_setPosition(use->game.shop.money.sprite, use->game.shop.money.pos);
    sfSprite_setPosition(use->game.shop.place.sprite, use->game.shop.place.pos);

}

void handle_pnj(rpg *use)
{
    handle_pnj_top(use);
    handle_pnj_bottom(use);
    if (use->event.key.code == atoi(use->files.touch[11])
    && use->event.type == sfEvtKeyReleased
    && ((use->game.map.map[use->game.map.y_p - 1][use->game.map.x_p] \
    == 'U'&& use->player.rect.top == 100 ) ||
    (use->game.map.map[use->game.map.y_p + 1][use->game.map.x_p]  \
    == 'U'&& use->player.rect.top == 0 ) ||
    (use->game.map.map[use->game.map.y_p][use->game.map.x_p + 1] \
    == 'U'&& use->player.rect.top == 150 ) ||
    (use->game.map.map[use->game.map.y_p][use->game.map.x_p - 1] \
    == 'U'&& use->player.rect.top == 50 ))) {
        use->game.player.box.boolean = 1;
        use->game.player.texte = use->files.png_useless;
        use->game.player.type = 'U';
        pnj_rng(use);
    }
    if (use->event.key.code == atoi(use->files.touch[11])
    && use->event.type == sfEvtKeyReleased
    && ((use->game.map.map[use->game.map.y_p - 1][use->game.map.x_p] \
    == 'M' && use->player.rect.top == 100 )||
    (use->game.map.map[use->game.map.y_p + 1][use->game.map.x_p]  \
    == 'M' && use->player.rect.top == 0 ) ||
    (use->game.map.map[use->game.map.y_p][use->game.map.x_p + 1] \
    == 'M' && use->player.rect.top == 150 ) ||
    (use->game.map.map[use->game.map.y_p][use->game.map.x_p - 1] \
    == 'M' && use->player.rect.top == 50 ))) {
        good_pos_shop(use);
        use->game.map.boolean = 0;
        use->game.shop.boolean = 1;
        use->game.player.type = 'M';
    }
}