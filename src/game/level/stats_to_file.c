/*
** EPITECH PROJECT, 2021
** final
** File description:
** stats_to_file
*/

#include "function.h"

void stats_to_file(rpg *use, ennemi_set_t ennemi, char **set, int i)
{
    use->files.fight[20] = my_getstr(i);
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
    button_set(&use->game.fight.ennemi, set[1], dimension(45, 48, 45, 48), \
    position(1320, 400));
    sfSprite_setScale(use->game.fight.ennemi.sprite, position(5, 5));
    button_set(&use->game.fight.player, use->files.player[1], \
    dimension(45, 150, 45, 50), position(1320, 400));
}