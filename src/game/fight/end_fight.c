/*
** EPITECH PROJECT, 2021
** game
** File description:
** end_fight
*/

#include "function.h"

void handle_add_potion(rpg *use)
{
    int random = rand() % 100;
    int who = 0;

    if (random <= 20) {
        who = rand() % 3;
        if (use->game.inventory.potion_one.boolean == 0) {
            use->game.inventory.potion_one.boolean = 1;
            if (who == 1) {
                use->game.inventory.potion_one.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_vie.png", NULL);
            } else if (who == 2)
                use->game.inventory.potion_one.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_xp.png", NULL);
            else
                use->game.inventory.potion_one.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_shield.png", NULL);
            sfSprite_setTexture(use->game.inventory.potion_one.sprite, use->game.inventory.potion_one.texture, sfTrue);
            return;
        }
        if (use->game.inventory.potion_two.boolean == 0) {
            use->game.inventory.potion_two.boolean = 1;
            if (who == 1) {
                use->game.inventory.potion_two.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_vie.png", NULL);
            } else if (who == 2)
                use->game.inventory.potion_two.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_xp.png", NULL);
            else
                use->game.inventory.potion_two.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_shield.png", NULL);
            sfSprite_setTexture(use->game.inventory.potion_two.sprite, use->game.inventory.potion_two.texture, sfTrue);
            return;
        }
        if (use->game.inventory.potion_three.boolean == 0) {
            use->game.inventory.potion_three.boolean = 1;
            if (who == 1) {
                use->game.inventory.potion_three.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_vie.png", NULL);
            } else if (who == 2)
                use->game.inventory.potion_three.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_xp.png", NULL);
            else
                use->game.inventory.potion_three.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_shield.png", NULL);
            sfSprite_setTexture(use->game.inventory.potion_three.sprite, use->game.inventory.potion_three.texture, sfTrue);
            return;
        }
        if (use->game.inventory.potion_four.boolean == 0) {
            use->game.inventory.potion_four.boolean = 1;
            if (who == 1) {
                use->game.inventory.potion_four.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_vie.png", NULL);
            } else if (who == 2)
                use->game.inventory.potion_four.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_xp.png", NULL);
            else
                use->game.inventory.potion_four.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_shield.png", NULL);
            sfSprite_setTexture(use->game.inventory.potion_four.sprite, use->game.inventory.potion_four.texture, sfTrue);
            return;
        }
        if (use->game.inventory.potion_five.boolean == 0) {
            use->game.inventory.potion_five.boolean = 1;
            if (who == 1) {
                use->game.inventory.potion_five.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_vie.png", NULL);
            } else if (who == 2)
                use->game.inventory.potion_five.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_xp.png", NULL);
            else
                use->game.inventory.potion_five.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_shield.png", NULL);
            sfSprite_setTexture(use->game.inventory.potion_five.sprite, use->game.inventory.potion_five.texture, sfTrue);
            return;
        }
    }
}

void detect_ennemi(rpg *use)
{
    if (atoi(use->files.fight[20]) < 84) {
        use->game.player.tmp_ennemi = use->game.player.ennemi;
        for (int i = 0; i < atoi(use->files.fight[20]); i++)
            use->game.player.ennemi = use->game.player.ennemi->next;
        printf("%f\t%f\n", use->game.player.ennemi->ennemi.pos.x, use->game.player.ennemi->ennemi.pos.y);
        use->game.player.ennemi->ennemi.pos.x += 10000;
        sfSprite_setPosition(use->game.player.ennemi->ennemi.sprite, use->game.player.ennemi->ennemi.pos);
        use->game.player.ennemi = use->game.player.tmp_ennemi;
    } else {
        if (atoi(use->files.fight[20]) == 86) {
            use->game.outro.boolean = 1;
            while (use->game.outro.boolean == 1 && my_outro(use) == 0);
            use->game.player.thanos.pos.x += 10000;
            sfSprite_setPosition(use->game.player.thanos.sprite, use->game.player.thanos.pos);
        }
        if (atoi(use->files.fight[20]) == 85) {
            use->game.player.golem.pos.x += 10000;
            sfSprite_setPosition(use->game.player.golem.sprite, use->game.player.golem.pos);
        }
        if (atoi(use->files.fight[20]) == 84) {
            use->game.player.centa.pos.x += 10000;
            sfSprite_setPosition(use->game.player.centa.sprite, use->game.player.centa.pos);
        }
    }
}

int handle_deadmenu(rpg *use)
{
    if (use->event.type == sfEvtClosed || released_button_detect(use, use->game.fight.button_exit, position(740, 858), position(1181, 918)) == 1) {
        use->close = 1;
        use->game.exit = 1;
        use->game.fight.boolean = 0;
        return (1);
    }
    if (released_button_detect(use, use->game.fight.button_menu, position(740, 753), position(1181, 813)) == 1) {
        use->game.exit = 1;
        use->menu.launch.close = 0;
        use->menu.launch.boolean = 1;
        use->game.fight.boolean = 0;
        use->menu.launch.hud.pos = position(use->player.pos.x - 960, use->player.pos.y - 540);
        sfSprite_setPosition(use->menu.launch.hud.sprite, use->menu.launch.hud.pos);
        use->player = player_set(use, use->player);
        return (1);
    }
    return (0);
}

void button_on_green_dead(rpg *use)
{
    pos_button_detect(use, use->game.fight.button_menu, position(740, 753), position(1181, 813));
    pos_button_detect(use, use->game.fight.button_exit, position(740, 858), position(1181, 918));
    pressed_button_detect(use, &use->game.fight.button_menu, position(740, 753), position(1181, 813));
    pressed_button_detect(use, &use->game.fight.button_exit, position(740, 858), position(1181, 918));
}

int deadmenu(rpg *use)
{
    sfRenderWindow_drawSprite(use->window, use->game.fight.dead_screen.sprite, NULL);
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (handle_deadmenu(use) == 1)
            return (1);
    button_on_green_dead(use);
    sfRenderWindow_display(use->window);
    return (0);
}

int end_fight(rpg *use)
{
    if (use->player.life <= 0) {
        use->game.map.boolean = 1;
        use->game.fight.boolean = 0;
        use->game.fight.to_order = "The ennemy kill you...";
        sfText_setString(use->game.fight.order.text, use->game.fight.to_order);
        use->game.fight.dead_screen.pos = position(use->player.pos.x - 960, use->player.pos.y -540);
        sfSprite_setPosition(use->game.fight.dead_screen.sprite, use->game.fight.dead_screen.pos);
        use->game.fight.button_menu.pos = position(use->player.pos.x - 960, use->player.pos.y -540);
        sfSprite_setPosition(use->game.fight.button_menu.sprite, use->game.fight.button_menu.pos);
        use->game.fight.button_exit.pos = position(use->player.pos.x - 960, use->player.pos.y -540);
        sfSprite_setPosition(use->game.fight.button_exit.sprite, use->game.fight.button_exit.pos);
        while (use->player.life <= 100 && deadmenu(use) == 0);
        return (1);
    }
    if (atoi(use->files.fight[4]) <= 0) {
        use->gold += 40 * use->difficulti;
        use->player.xp += 30 * use->difficulti;
        handle_add_potion(use);
        detect_ennemi(use);
        use->player.xp += 20;
        use->game.map.boolean = 1;
        use->game.fight.boolean = 0;
        use->game.fight.to_order = "You kill the ennemy!";
        sfText_setString(use->game.fight.order.text, use->game.fight.to_order);
        return (1);
    }
    return (0);
}