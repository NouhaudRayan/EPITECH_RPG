/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_item
*/

#include "function.h"

void set_pos_change_armor_helmet(rpg *use)
{
    use->game.inventory.armor.back.pos = position((use->player.pos.x - 960), (use->player.pos.y - 540));
    use->game.inventory.armor.annuler.pos = position((use->player.pos.x - 960), (use->player.pos.y - 540));
    use->game.inventory.helmet.pos = position((use->player.pos.x - 960) + 619, (use->player.pos.y - 540) + 489);
    use->game.inventory.armor.one.pos = position((use->player.pos.x - 960), (use->player.pos.y - 540));
    sfSprite_setPosition(use->game.inventory.armor.one.sprite, use->game.inventory.armor.one.pos);
    sfSprite_setPosition(use->game.inventory.helmet.sprite, use->game.inventory.helmet.pos);
    sfSprite_setPosition(use->game.inventory.armor.back.sprite, use->game.inventory.armor.back.pos);
    sfSprite_setPosition(use->game.inventory.armor.annuler.sprite, use->game.inventory.armor.annuler.pos);
}

void set_pos_change_armor_chestplate(rpg *use)
{
    use->game.inventory.armor.back.pos = position((use->player.pos.x - 960), (use->player.pos.y - 540));
    use->game.inventory.armor.annuler.pos = position((use->player.pos.x - 960), (use->player.pos.y - 540));
    use->game.inventory.chesplate.pos = position((use->player.pos.x - 960) + 669, (use->player.pos.y - 540) + 489);
    use->game.inventory.armor.one.pos = position((use->player.pos.x - 960), (use->player.pos.y - 540));
    sfSprite_setPosition(use->game.inventory.armor.one.sprite, use->game.inventory.armor.one.pos);
    sfSprite_setPosition(use->game.inventory.helmet.sprite, use->game.inventory.chesplate.pos);
    sfSprite_setPosition(use->game.inventory.armor.back.sprite, use->game.inventory.armor.back.pos);
    sfSprite_setPosition(use->game.inventory.armor.annuler.sprite, use->game.inventory.armor.annuler.pos);
}

void set_pos_change_attack(rpg *use)
{
    use->game.inventory.attack.futur.name.pos = position((use->player.pos.x - 960) + 552, (use->player.pos.y - 540) + 96);
    use->game.inventory.attack.futur.damage.pos = position((use->player.pos.x - 960) + 952, (use->player.pos.y - 540) + 96);
    use->game.inventory.attack.futur.pp.pos = position((use->player.pos.x - 960) + 1250, (use->player.pos.y - 540) + 96);
    sfText_setPosition(use->game.inventory.attack.futur.pp.text, use->game.inventory.attack.futur.pp.pos);
    sfText_setPosition(use->game.inventory.attack.futur.damage.text, use->game.inventory.attack.futur.damage.pos);
    sfText_setPosition(use->game.inventory.attack.futur.name.text, use->game.inventory.attack.futur.name.pos);
    use->game.inventory.attack.back.pos = position((use->player.pos.x - 960), (use->player.pos.y - 540));
    use->game.inventory.attack.annuler.pos = position((use->player.pos.x - 960), (use->player.pos.y - 540));
    use->game.inventory.attack.actual_one.name.pos = position((use->player.pos.x - 960) + 552, (use->player.pos.y - 540) + 463);
    use->game.inventory.attack.actual_one.damage.pos = position((use->player.pos.x - 960) + 952, (use->player.pos.y - 540) + 463);
    use->game.inventory.attack.actual_one.pp.pos = position((use->player.pos.x - 960) + 1250, (use->player.pos.y - 540) + 463);
    use->game.inventory.attack.actual_two.name.pos = position((use->player.pos.x - 960) + 552, (use->player.pos.y - 540) + 653);
    use->game.inventory.attack.actual_two.damage.pos = position((use->player.pos.x - 960) + 952, (use->player.pos.y - 540) + 653);
    use->game.inventory.attack.actual_two.pp.pos = position((use->player.pos.x - 960) + 1250, (use->player.pos.y - 540) + 653);
    use->game.inventory.attack.one.pos = position((use->player.pos.x - 960), (use->player.pos.y - 540));
    sfSprite_setPosition(use->game.inventory.attack.one.sprite, use->game.inventory.attack.one.pos);
    use->game.inventory.attack.two.pos = position((use->player.pos.x - 960), (use->player.pos.y - 540));
    sfSprite_setPosition(use->game.inventory.attack.two.sprite, use->game.inventory.attack.two.pos);
    sfSprite_setPosition(use->game.inventory.attack.back.sprite, use->game.inventory.attack.back.pos);
    sfSprite_setPosition(use->game.inventory.attack.annuler.sprite, use->game.inventory.attack.annuler.pos);
    sfText_setPosition(use->game.inventory.attack.actual_one.name.text, use->game.inventory.attack.actual_one.name.pos);
    sfText_setPosition(use->game.inventory.attack.actual_one.damage.text, use->game.inventory.attack.actual_one.damage.pos);
    sfText_setPosition(use->game.inventory.attack.actual_one.pp.text, use->game.inventory.attack.actual_one.pp.pos);
    sfText_setPosition(use->game.inventory.attack.actual_two.name.text, use->game.inventory.attack.actual_two.name.pos);
    sfText_setPosition(use->game.inventory.attack.actual_two.damage.text, use->game.inventory.attack.actual_two.damage.pos);
    sfText_setPosition(use->game.inventory.attack.actual_two.pp.text, use->game.inventory.attack.actual_two.pp.pos);
    sfText_setString(use->game.inventory.attack.actual_one.name.text, use->player.attack_one.name);
    sfText_setString(use->game.inventory.attack.actual_one.damage.text, my_getstr(use->player.attack_one.damage));
    sfText_setString(use->game.inventory.attack.actual_one.pp.text, my_getstr(use->player.attack_one.pp));
    sfText_setString(use->game.inventory.attack.actual_two.name.text, use->player.attack_two.name);
    sfText_setString(use->game.inventory.attack.actual_two.damage.text, my_getstr(use->player.attack_two.damage));
    sfText_setString(use->game.inventory.attack.actual_two.pp.text, my_getstr(use->player.attack_two.pp));
}

button_set_t give_item(char *path, sfIntRect rect, sfVector2f pos)
{
    button_set_t button;

    button.pos = pos;
    button.rect = rect;
    button.sprite = sfSprite_create();
    button.texture = sfTexture_createFromFile(path, NULL);
    sfSprite_setTexture(button.sprite, button.texture, sfTrue);
    sfSprite_setPosition(button.sprite, button.pos);
    sfSprite_setTextureRect(button.sprite, button.rect);
    return (button);
}

char *how_item(rpg *use, char **item)
{
    int i = 0;

    for (; item[i] != NULL; i += 3) {
        if (use->game.map.y_p == atoi(item[i]) &&
        use->game.map.x_p == atoi(item[i + 1])) {
            return (item[i + 2]);
        }
    }
    return ("sprites/hud/inventory/helmet_rare.png");
}

int handle_event_change_armor_chestplate(rpg *use, button_set_t new)
{
    if (use->event.type == sfEvtClosed) {
        use->close = 1;
        use->game.exit = 1;
        use->game.map.boolean = 0;
        use->game.inventory.armor.actual.boolean = 0;
        return (1);
    }
    pressed_button_detect(use, &use->game.inventory.armor.annuler, \
    position(830, 750), position(1100, 805));
    if (released_button_detect(use, use->game.inventory.armor.annuler, \
    position(830, 750), position(1100, 805)) == 1) {
        use->game.inventory.armor.annuler.rect.left = 0;
        sfSprite_setTextureRect(use->game.inventory.armor.annuler.sprite, \
        use->game.inventory.armor.annuler.rect);
        use->game.inventory.armor.futur.boolean = 0;
        return (1);
    }
    if (released_button_detect(use, use->game.inventory.armor.annuler, \
    position(564, 457), position(774, 624)) == 1) {
        use->game.inventory.chesplate.boolean = 1;
        use->game.inventory.chesplate.texture = new.texture;
        sfSprite_setTexture(use->game.inventory.chesplate.sprite, use->game.inventory.chesplate.texture, sfTrue);
        use->game.inventory.armor.actual.boolean = 0;
        return (1);
    }
    return (0);
}

int my_change_armor_chestplate(rpg *use, button_set_t new)
{
    display_level(use);
    sfRenderWindow_drawSprite(use->window, \
    use->game.inventory.armor.back.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, new.sprite, NULL);
    if (use->game.inventory.chesplate.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->game.inventory.chesplate.sprite, NULL);
    while (sfRenderWindow_pollEvent(use->window, &use->event)) {
        if (handle_event_change_armor_chestplate(use, new) == 1)
            return (1);
    }
    pos_button_detect(use, use->game.inventory.armor.annuler, \
    position(830, 750), position(1100, 805));
    pos_button_detect(use, use->game.inventory.armor.one, \
    position(564, 457), position(774, 624));
    sfRenderWindow_display(use->window);
    return (0);
}

int detect_item(rpg *use, char caracter)
{
    if (use->event.key.code == atoi(use->files.touch[11]) && use->event.type == \
    sfEvtKeyReleased && use->game.map.map[use->game.map.y_p - 1]\
    [use->game.map.x_p] == caracter)
        return (1);
    if (use->event.key.code == atoi(use->files.touch[11]) && use->event.type == \
    sfEvtKeyReleased && use->game.map.map[use->game.map.y_p + 1]\
    [use->game.map.x_p] == caracter)
        return (1);
    if (use->event.key.code == atoi(use->files.touch[11]) && use->event.type == \
    sfEvtKeyReleased && use->game.map.map[use->game.map.y_p]\
    [use->game.map.x_p  - 1] == caracter)
        return (1);
    if (use->event.key.code == atoi(use->files.touch[11]) && use->event.type == \
    sfEvtKeyReleased && use->game.map.map[use->game.map.y_p]\
    [use->game.map.x_p + 1] == caracter)
        return (1);
    return (0);
}

int detect_open(rpg *use)
{
    use->game.map.tmp_chest = use->game.map.chest;
    for (int i = 0; i < 6; i++) {
        if (use->player.pos.x >= use->game.map.chest->chest.pos.x - 64 &&
        use->player.pos.x <= use->game.map.chest->chest.pos.x + 64
        && use->player.pos.y >= use->game.map.chest->chest.pos.y - 64 &&
        use->player.pos.y <= use->game.map.chest->chest.pos.y + 64) {
            if (use->game.map.chest->chest.boolean == 0) {
                use->game.map.chest->chest.boolean = 1;
                use->game.map.chest->chest.texture = sfTexture_createFromFile("sprites/hud/inventory/treasure_open.png", NULL);
                sfSprite_setTexture(use->game.map.chest->chest.sprite, use->game.map.chest->chest.texture, sfTrue);
                use->game.map.chest = use->game.map.tmp_chest;
                return (1);
            }
        }
        use->game.map.chest = use->game.map.chest->next;
    }
    use->game.map.chest = use->game.map.tmp_chest;
    return (0);
}

void handle_item(rpg *use)
{
    if (detect_item(use, '2') == 1) {
        if (detect_open(use) == 1) {
            use->game.inventory.armor.actual.boolean = 1;
            set_pos_change_armor_helmet(use);
            use->gold += 30 * use->difficulti;
            use->player.xp += 10 * use->difficulti;
            use->player.shield += 50;
            while (use->game.inventory.armor.actual.boolean == 1 && \
            my_change_armor_helmet(use, give_item(how_item(use, use->files.item_helmet), dimension(0, 0, 100, 100), position((use->player.pos.x - 960) + 1200, (use->player.pos.y - 540) + 489))) == 0);
        }
    }
    if (detect_item(use, '1') == 1) {
        if (detect_open(use) == 1) {
            use->game.inventory.attack.boolean = 1;
            set_pos_change_attack(use);
            use->gold += 30 * use->difficulti;
            use->player.xp += 10 * use->difficulti;
            while (use->game.inventory.attack.boolean == 1 && \
            my_change_attack(use, attack_set(use, how_item(use, use->files.item_attack))) == 0);
        }
    }
    if (detect_item(use, '3') == 1) {
        if (detect_open(use) == 1) {
            use->game.inventory.armor.futur.boolean = 1;
            set_pos_change_armor_chestplate(use);
            use->gold += 30 * use->difficulti;
            use->player.xp += 100 * use->difficulti;
            use->player.shield += 50;
            while (use->game.inventory.armor.futur.boolean == 1 && \
            my_change_armor_chestplate(use, give_item(how_item(use, use->files.item_chesplate), dimension(0, 0, 100, 100), position((use->player.pos.x - 960) + 1200, (use->player.pos.y - 540) + 489))) == 0);
        }
    }
}