/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_features
*/

#include "function.h"

void set_pos_inventory(rpg *use)
{
    use->game.inventory.action.pos = position(use->player.pos.x - 960, use->player.pos.y - 540);
    use->game.inventory.back.pos = position(use->player.pos.x - 960, use->player.pos.y - 540);
    use->game.inventory.potion_one.pos = position((use->player.pos.x - 960) + 683, (use->player.pos.y - 540) + 731);
    use->game.inventory.potion_two.pos = position((use->player.pos.x - 960) + 783, (use->player.pos.y - 540) + 731);
    use->game.inventory.potion_three.pos = position((use->player.pos.x - 960) + 883, (use->player.pos.y - 540) + 731);
    use->game.inventory.potion_four.pos = position((use->player.pos.x - 960) + 983, (use->player.pos.y - 540) + 731);
    use->game.inventory.potion_five.pos = position((use->player.pos.x - 960) + 1083, (use->player.pos.y - 540) + 731);
    use->game.inventory.helmet.pos = position((use->player.pos.x - 960) + 593, (use->player.pos.y - 540) + 358);
    use->game.inventory.chesplate.pos = position((use->player.pos.x - 960) + 593, (use->player.pos.y - 540) + 557);
    use->game.inventory.one.name.pos = position((use->player.pos.x - 960) + 1117, (use->player.pos.y - 540) + 366);
    use->game.inventory.one.damage.pos = position((use->player.pos.x - 960) + 1157, (use->player.pos.y - 540) + 413);
    use->game.inventory.one.pp.pos = position((use->player.pos.x - 960) + 1329, (use->player.pos.y - 540) + 413);
    use->game.inventory.two.name.pos = position((use->player.pos.x - 960) + 1117, (use->player.pos.y - 540) + 575);
    use->game.inventory.two.damage.pos = position((use->player.pos.x - 960) + 1157, (use->player.pos.y - 540) + 622);
    use->game.inventory.two.pp.pos = position((use->player.pos.x - 960) + 1329, (use->player.pos.y - 540) + 622);
    sfSprite_setPosition(use->game.inventory.action.sprite, use->game.inventory.action.pos);
    sfSprite_setPosition(use->game.inventory.back.sprite, use->game.inventory.back.pos);
    sfSprite_setPosition(use->game.inventory.potion_one.sprite, use->game.inventory.potion_one.pos);
    sfSprite_setPosition(use->game.inventory.potion_two.sprite, use->game.inventory.potion_two.pos);
    sfSprite_setPosition(use->game.inventory.potion_three.sprite, use->game.inventory.potion_three.pos);
    sfSprite_setPosition(use->game.inventory.potion_four.sprite, use->game.inventory.potion_four.pos);
    sfSprite_setPosition(use->game.inventory.potion_five.sprite, use->game.inventory.potion_five.pos);
    sfSprite_setPosition(use->game.inventory.helmet.sprite, use->game.inventory.helmet.pos);
    sfSprite_setPosition(use->game.inventory.chesplate.sprite, use->game.inventory.chesplate.pos);
    sfText_setPosition(use->game.inventory.one.name.text, use->game.inventory.one.name.pos);
    sfText_setPosition(use->game.inventory.one.damage.text, use->game.inventory.one.damage.pos);
    sfText_setPosition(use->game.inventory.one.pp.text, use->game.inventory.one.pp.pos);
    sfText_setPosition(use->game.inventory.two.name.text, use->game.inventory.two.name.pos);
    sfText_setPosition(use->game.inventory.two.damage.text, use->game.inventory.two.damage.pos);
    sfText_setPosition(use->game.inventory.two.pp.text, use->game.inventory.two.pp.pos);
}

void handle_features(rpg *use)
{
    if (use->event.key.code == atoi(use->files.touch[9]) && \
    use->event.type == sfEvtKeyReleased) {
        sfSound_play(use->music.effect.sound);
        if (use->game.mini.boolean == 0)
            use->game.mini.boolean = 1;
        else
            use->game.mini.boolean = 0;
    }
    if (use->event.key.code == atoi(use->files.touch[13]) && \
    use->event.type == sfEvtKeyReleased) {
        sfSound_play(use->music.effect.sound);
        set_pos_inventory(use);
        use->game.inventory.back.pos = position(use->player.pos.x - 960, \
        use->player.pos.y - 540);
        sfSprite_setPosition(use->game.inventory.back.sprite, \
        use->game.inventory.back.pos);
        use->game.inventory.boolean = 1;
        use->game.map.boolean = 0;
    }
}