/*
** EPITECH PROJECT, 2021
** final
** File description:
** ennemi_set
*/

#include "function.h"

ennemi_set_t ennemi_set(rpg *use, ennemi_set_t ennemi, sfVector2f pos, \
char **set)
{
    ennemi.attack_one = attack_set(use, set[11]);
    ennemi.attack_two = attack_set(use, set[13]);
    ennemi.xp = atoi(set[7]);
    ennemi.life = atoi(set[3]);
    ennemi.txt = NULL;
    ennemi.x = 0;
    ennemi.y = 0;
    ennemi.moove = 0;
    ennemi.pos = pos;
    ennemi.rect = dimension(atoi(set[18]), atoi(set[19]), atoi(set[20]), \
    atoi(set[21]));
    ennemi.damage = rand () % 100;
    ennemi.shield = atoi(set[5]);
    ennemi.sprite = sfSprite_create();
    ennemi.texture = sfTexture_createFromFile(set[1], NULL);
    ennemi.clock = clock_set(ennemi.clock);
    sfSprite_setTexture(ennemi.sprite, ennemi.texture, sfTrue);
    sfSprite_setTextureRect(ennemi.sprite, ennemi.rect);
    sfSprite_setPosition(ennemi.sprite, ennemi.pos);
    sfSprite_setScale(ennemi.sprite, position(2, 2));
    return (ennemi);
}