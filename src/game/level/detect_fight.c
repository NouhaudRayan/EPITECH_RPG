/*
** EPITECH PROJECT, 2021
** final
** File description:
** detect_fight
*/

#include "function.h"

void file_boss_stat(rpg *use, boss_set_t ennemi, char *path, sfIntRect rect)
{
    if (strcmp(path, "sprites/personnage/level/golem.png") == 0) {
        use->files.fight[20] = my_getstr(85);
        sfSprite_setScale(use->game.fight.ennemi.sprite, position(3, 3));
    }
    if (strcmp(path, "sprites/personnage/level/thanos.png") == 0) {
        use->files.fight[20] = my_getstr(86);
        sfSprite_setScale(use->game.fight.ennemi.sprite, position(5, 5));
    }
    if (strcmp(path, "sprites/personnage/level/centa.png") == 0) {
        use->files.fight[20] = my_getstr(84);
        sfSprite_setScale(use->game.fight.ennemi.sprite, position(3, 3));
    }
    use->files.fight[2] = my_getstr(use->player.life + use->player.shield);
    use->files.fight[4] = my_getstr(ennemi.life + ennemi.shield);
    use->files.fight[7] = use->files.player[11];
    use->files.fight[8] = my_getstr(use->player.attack_one.pp);
    use->files.fight[14] = use->files.player[13];
    use->files.fight[15] = my_getstr(use->player.attack_two.pp);
    use->files.fight[10] = ennemi.attack_one.name;
    use->files.fight[11] = my_getstr(ennemi.attack_one.damage);
    use->files.fight[17] = ennemi.attack_two.name;
    use->files.fight[18] = my_getstr(ennemi.attack_two.damage);
    use->game.fight.ennemi.rect = rect;
    use->game.fight.ennemi.texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(use->game.fight.ennemi.sprite, use->game.fight.ennemi.texture, sfTrue);
    sfSprite_setTextureRect(use->game.fight.ennemi.sprite, use->game.fight.ennemi.rect);
    button_set(&use->game.fight.player, use->files.player[1], \
    dimension(45, 150, 45, 50), position(1320, 400));
}

void detect_fight(rpg *use)
{
    use->game.player.tmp_ennemi = use->game.player.ennemi;
    for (int i = 0; i < 28; i++) {
        if (use->player.pos.x >= use->game.player.ennemi->ennemi.pos.x - 32 &&
        use->player.pos.x <= use->game.player.ennemi->ennemi.pos.x + 32
        && use->player.pos.y >= use->game.player.ennemi->ennemi.pos.y - 32 &&
        use->player.pos.y <= use->game.player.ennemi->ennemi.pos.y + 32
        && use->game.player.ennemi->ennemi.life > 0) {
            stats_to_file(use, use->game.player.ennemi->ennemi, \
            use->game.player.ennemi->set, i);
            put_good_pos(use);
            use->game.fight.boolean = 1;
            use->game.map.boolean = 0;
        }
        use->game.player.ennemi = use->game.player.ennemi->next;
    }
    use->game.player.ennemi = use->game.player.tmp_ennemi;
    if (use->player.pos.x >= use->game.player.thanos.pos.x - 32 &&
    use->player.pos.x <= use->game.player.thanos.pos.x + 32
    && use->player.pos.y >= use->game.player.thanos.pos.y - 32 &&
    use->player.pos.y <= use->game.player.thanos.pos.y + 32) {
        file_boss_stat(use, use->game.player.thanos, "sprites/personnage/level/thanos.png", dimension(45, 0, 45, 50));
        put_good_pos(use);
        use->game.fight.boolean = 1;
        use->game.map.boolean = 0;
    }
    if (use->player.pos.x >= use->game.player.golem.pos.x - 75 &&
    use->player.pos.x <= use->game.player.golem.pos.x + 145
    && use->player.pos.y >= use->game.player.golem.pos.y - 75 &&
    use->player.pos.y <= use->game.player.golem.pos.y + 125) {
        file_boss_stat(use, use->game.player.golem, "sprites/personnage/level/golem.png", dimension(100, 0, 100, 100));
        put_good_pos(use);
        use->game.fight.boolean = 1;
        use->game.map.boolean = 0;
    }
    if (use->player.pos.x >= use->game.player.centa.pos.x - 50 &&
    use->player.pos.x <= use->game.player.centa.pos.x + 120
    && use->player.pos.y >= use->game.player.centa.pos.y - 50 &&
    use->player.pos.y <= use->game.player.centa.pos.y + 100) {
        file_boss_stat(use, use->game.player.centa, "sprites/personnage/level/centa.png", dimension(100, 0, 100, 100));
        put_good_pos(use);
        use->game.fight.boolean = 1;
        use->game.map.boolean = 0;
    }
}


//    fill_up_boss_set_t(&use->game.player.thanos, "sprites/personnage/level/thanos.png", dimension(0, 0, 45, 50), position(5380, 540));
//    fill_up_boss_set_t(&use->game.player.centa, "sprites/personnage/level/centa.png", dimension(0, 0, 70, 100), position(4500, 4420));
//    fill_up_boss_set_t(&use->game.player.golem, "sprites/personnage/level/golem.png", dimension(0, 0, 100, 100), position(9390, 3816));
