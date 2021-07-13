/*
** EPITECH PROJECT, 2021
** final
** File description:
** fill_up_level_set_t
*/

#include "function.h"

/*
list *initialisation(rpg *use, char *path, char *text, sfVector2f pos)
{
    list *ennemi = malloc(sizeof(list));

    if (ennemi == NULL)
        return NULL;
    ennemi->set = create_files(text);
    ennemi->path = create_files(path);
    ennemi->ennemi = ennemi_set(use, ennemi->ennemi, pos, \
    create_files(text));
    return(ennemi);
}

list *insertion_pos(list *ennemi, int posi, rpg *use, \
char *path, char *text, sfVector2f pos)
{
    list *new = malloc(sizeof(*new));
    list *prec = ennemi;
    list *cur = ennemi;

    if (ennemi == NULL)
        return (NULL);
    if (new != NULL) {
        new->set = create_files(text);
        new->path = create_files(path);
        new->ennemi = ennemi_set(use, new->ennemi, pos, create_files(text));
        new->next = NULL;
    }
    new->set = create_files(text);
    new->path = create_files(path);
    new->ennemi = ennemi_set(use, new->ennemi, pos, create_files(text));
    new->next = cur;
    return(new);
}
*/

button_set_t button_set_c(rpg *use, sfVector2f pos)
{
    button_set_t button;

    button.boolean = 0;
    button.rect = dimension(0, 0, 55, 55);
    button.pos = pos;
    button.sprite = sfSprite_create();
    button.texture = sfTexture_createFromFile("sprites/hud/inventory/treasure.png", NULL);
    sfSprite_setTexture(button.sprite, button.texture, sfTrue);
    sfSprite_setPosition(button.sprite, button.pos);
    sfSprite_setTextureRect(button.sprite, button.rect);
    return (button);
}

sfVector2f find_pos_chest(rpg *use)
{
    return (position(0, 0));
}

list_c *initialisation_c(rpg *use, sfVector2f pos)
{
    list_c *chest = malloc(sizeof(list));

    if (chest == NULL)
        return NULL;
    chest->chest = button_set_c(use, pos);
    return(chest);
}

list_c *insertion_pos_c(list_c *chest, rpg *use, sfVector2f pos)
{
    list_c *new = malloc(sizeof(*new));
    list_c *prec = chest;
    list_c *cur = chest;

    if (chest == NULL)
        return (NULL);
    if (new != NULL) {
        new->chest = button_set_c(use, pos);
        new->next = NULL;
    }
    new->chest = button_set_c(use, pos);
    new->next = cur;
    return(new);
}
void list_chest_set(rpg *use)
{
    int x = 0;

    for (int i = 0; i < 6; i++, x += 2) {
        if (i == 0) {
            use->game.map.chest = initialisation_c(use, position(atoi(use->files.pos_chest[x]), atoi(use->files.pos_chest[x + 1])));
        } else
            use->game.map.chest = insertion_pos_c(use->game.map.chest, use, position(atoi(use->files.pos_chest[x]), atoi(use->files.pos_chest[x + 1])));
    }
    use->game.map.detect_chest = use->game.map.chest;
    use->game.map.tmp_detect_chest = use->game.map.chest;
}

void fill_up_boss_set_t(boss_set_t *boss, char *path, sfIntRect rect, sfVector2f pos)
{
    boss->clock = clock_set(boss->clock);
    boss->life = 130;
    boss->damage = 2;
    boss->shield = 0;
    boss->pos = pos;
    boss->rect = rect;
    boss->xp = 100;
    boss->sprite = sfSprite_create();
    boss->texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(boss->sprite, boss->texture, sfTrue);
    sfSprite_setPosition(boss->sprite, boss->pos);
    sfSprite_setTextureRect(boss->sprite, boss->rect);
    sfSprite_setScale(boss->sprite, position(2, 2));
}

void specifity_boss(rpg *use, boss_set_t *boss, char *attack_one, char *attack_two)
{
    boss->attack_one = attack_set(use, attack_one);
    boss->attack_two = attack_set(use, attack_two);
    if (strcmp(attack_two, "BigImpact") == 0) {
        boss->life = 170;
        boss->shield = 80;
    }
    if (strcmp(attack_two, "BigCombo") == 0) {
        boss->life = 150;
        boss->shield = 60;
    }
    if (strcmp(attack_two, "Fury") == 0) {
        boss->life = 130;
        boss->shield = 70;
    }
}

void fill_up_level_set_t(rpg *use)
{
    use->game.map.boolean = 0;
    use->game.map.x_p = 241;
    use->game.map.y_p = 577;
    use->game.map.map = create_files("sprites/map/level.txt");
    background_set(&use->game.background, \
    "sprites/hud/level/fond_etoile.jpg", dimension(0, 0, 1920, 1080), \
    position(6780, 17910));
    background_set(&use->game.map.spaceship, \
    "sprites/hud/level/spaceship2.0.png", dimension(0, 0, 5024, 10016), \
    position(0, 0));
    sfSprite_setScale(use->game.map.spaceship.sprite, \
    position(2, 2));
    list_chest_set(use);
    list_ennemi_set(use);
    fill_up_dog_set(use);
    fill_up_boss_set_t(&use->game.player.thanos, "sprites/personnage/level/thanos.png", dimension(0, 0, 45, 50), position(5380, 540));
    fill_up_boss_set_t(&use->game.player.centa, "sprites/personnage/level/centa.png", dimension(0, 0, 70, 100), position(4500, 4420));
    fill_up_boss_set_t(&use->game.player.golem, "sprites/personnage/level/golem.png", dimension(0, 0, 100, 100), position(9390, 3816));
    specifity_boss(use, &use->game.player.thanos, "Radiation", "BigImpact");
    specifity_boss(use, &use->game.player.centa, "Combo", "BigCombo");
    specifity_boss(use, &use->game.player.golem, "Radiation", "Fury");
}