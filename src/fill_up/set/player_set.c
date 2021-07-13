/*
** EPITECH PROJECT, 2021
** game
** File description:
** player_set
*/

#include "function.h"

player_set_t player_set(rpg *use, player_set_t player)
{
    player.attack_one = attack_set(use, use->files.player[11]);
    player.attack_two = attack_set(use, use->files.player[13]);
    player.life = atoi(use->files.player[3]);
    player.shield = atoi(use->files.player[5]);
    player.xp = atoi(use->files.player[7]);
    player.level = atoi(use->files.player[9]);
    player.pos = position(atoi(use->files.player[19]), atoi(\
    use->files.player[20]));
    player.rect = dimension(atoi(use->files.player[25]), atoi(\
    use->files.player[26]), atoi(use->files.player[27]), atoi(\
    use->files.player[28]));
    player.sprite = sfSprite_create();
    player.texture = sfTexture_createFromFile(use->files.player[1], NULL);
    player.clock = clock_set(player.clock);
    sfSprite_setTexture(player.sprite, player.texture, sfTrue);
    sfSprite_setTextureRect(player.sprite, player.rect);
    sfSprite_setPosition(player.sprite, player.pos);
    sfSprite_setScale(player.sprite, position(atoi(use->files.player[22]), \
    atoi(use->files.player[23])));
    return (player);
}