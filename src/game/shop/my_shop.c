/*
** EPITECH PROJECT, 2021
** final
** File description:
** my_shop
*/

#include "function.h"

void handle_life_po(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 251 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 684 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 118 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 962 &&
    use->event.type == sfEvtMouseButtonPressed) {
        use->game.shop.selection_v.boolean = 1;
        use->game.shop.selection_r.boolean = 1;
        if (use->game.shop.selection_r.rect.left != 0) {
            use->game.shop.selection_r.rect.left = 0;
            sfSprite_setTextureRect(use->game.shop.selection_r.sprite, use->game.shop.selection_r.rect);
        }
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 251 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 684 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 118 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 962 &&
    use->event.type == sfEvtMouseButtonReleased) {
        use->game.shop.selection_v.boolean = 0;
        use->game.shop.selection_r.boolean = 0;
        if (use->gold >= 100) {
            if (use->game.inventory.potion_one.boolean == 0) {
                use->game.inventory.potion_one.boolean = 1;
                use->game.inventory.potion_one.type = 1;
                use->game.inventory.potion_one.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_vie.png", NULL);
                sfSprite_setTexture(use->game.inventory.potion_one.sprite, use->game.inventory.potion_one.texture, sfTrue);
                use->game.map.boolean = 1;
                use->game.shop.boolean = 0;
                use->gold -= 100;
                return;
            }
            if (use->game.inventory.potion_two.boolean == 0) {
                use->game.inventory.potion_two.boolean = 1;
                use->game.inventory.potion_two.type = 1;
                use->game.inventory.potion_two.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_vie.png", NULL);
                sfSprite_setTexture(use->game.inventory.potion_two.sprite, use->game.inventory.potion_two.texture, sfTrue);
                use->game.map.boolean = 1;
                use->game.shop.boolean = 0;
                use->gold -= 100;
                return;
            }
            if (use->game.inventory.potion_three.boolean == 0) {
                use->game.inventory.potion_three.boolean = 1;
                use->game.inventory.potion_three.type = 1;
                use->game.inventory.potion_three.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_vie.png", NULL);
                sfSprite_setTexture(use->game.inventory.potion_three.sprite, use->game.inventory.potion_three.texture, sfTrue);
                use->game.map.boolean = 1;
                use->game.shop.boolean = 0;
                use->gold -= 100;
                return;
            }
            if (use->game.inventory.potion_four.boolean == 0) {
                use->game.inventory.potion_four.type = 1;
                use->game.inventory.potion_four.boolean = 1;
                use->game.inventory.potion_four.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_vie.png", NULL);
                sfSprite_setTexture(use->game.inventory.potion_four.sprite, use->game.inventory.potion_four.texture, sfTrue);
                use->game.map.boolean = 1;
                use->game.shop.boolean = 0;
                use->gold -= 100;
                return;
            }
            if (use->game.inventory.potion_five.boolean == 0) {
                use->game.inventory.potion_five.boolean = 1;
                use->game.inventory.potion_five.type = 1;
                use->game.inventory.potion_five.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_vie.png", NULL);
                sfSprite_setTexture(use->game.inventory.potion_five.sprite, use->game.inventory.potion_five.texture, sfTrue);
                use->game.map.boolean = 1;
                use->game.shop.boolean = 0;
                use->gold -= 100;
                return;
            }
            use->game.shop.place.boolean = 1;
        } else {
            use->game.shop.money.boolean = 1;
        }
    }
}

void handle_xp_po(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1235 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1668 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 118 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 962 &&
    use->event.type == sfEvtMouseButtonPressed) {
        use->game.shop.selection_v.boolean = 1;
        use->game.shop.selection_r.boolean = 1;
        if (use->game.shop.selection_r.rect.left != 3840) {
            use->game.shop.selection_r.rect.left = 3840;
            sfSprite_setTextureRect(use->game.shop.selection_r.sprite, use->game.shop.selection_r.rect);
        }
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1235 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1668 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 118 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 962 &&
    use->event.type == sfEvtMouseButtonReleased) {
        use->game.shop.selection_v.boolean = 0;
        use->game.shop.selection_r.boolean = 0;
        if (use->gold >= 150) {
            if (use->game.inventory.potion_one.boolean == 0) {
                use->game.inventory.potion_one.boolean = 1;
                use->game.inventory.potion_one.type = 3;
                use->game.inventory.potion_one.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_xp.png", NULL);
                sfSprite_setTexture(use->game.inventory.potion_one.sprite, use->game.inventory.potion_one.texture, sfTrue);
                use->game.map.boolean = 1;
                use->game.shop.boolean = 0;
                use->gold -= 150;
                return;
            }
            if (use->game.inventory.potion_two.boolean == 0) {
                use->game.inventory.potion_two.boolean = 1;
                use->game.inventory.potion_two.type = 3;
                use->game.inventory.potion_two.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_xp.png", NULL);
                sfSprite_setTexture(use->game.inventory.potion_two.sprite, use->game.inventory.potion_two.texture, sfTrue);
                use->game.map.boolean = 1;
                use->game.shop.boolean = 0;
                use->gold -= 150;
                return;
            }
            if (use->game.inventory.potion_three.boolean == 0) {
                use->game.inventory.potion_three.boolean = 1;
                use->game.inventory.potion_three.type = 3;
                use->game.inventory.potion_three.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_xp.png", NULL);
                sfSprite_setTexture(use->game.inventory.potion_three.sprite, use->game.inventory.potion_three.texture, sfTrue);
                use->game.map.boolean = 1;
                use->game.shop.boolean = 0;
                use->gold -= 150;
                return;
            }
            if (use->game.inventory.potion_four.boolean == 0) {
                use->game.inventory.potion_four.boolean = 1;
                use->game.inventory.potion_four.type = 3;
                use->game.inventory.potion_four.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_xp.png", NULL);
                sfSprite_setTexture(use->game.inventory.potion_four.sprite, use->game.inventory.potion_four.texture, sfTrue);
                use->game.map.boolean = 1;
                use->game.shop.boolean = 0;
                use->gold -= 150;
                return;
            }
            if (use->game.inventory.potion_five.boolean == 0) {
                use->game.inventory.potion_five.boolean = 1;
                use->game.inventory.potion_five.type = 3;
                use->game.inventory.potion_five.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_xp.png", NULL);
                sfSprite_setTexture(use->game.inventory.potion_five.sprite, use->game.inventory.potion_five.texture, sfTrue);
                use->game.map.boolean = 1;
                use->game.shop.boolean = 0;
                use->gold -= 150;
                return;
            }
            use->game.shop.place.boolean = 1;
        } else {
            use->game.shop.money.boolean = 1;
        }
    }
}

void handle_shield_po(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 744 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1117 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 118 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 962 &&
    use->event.type == sfEvtMouseButtonPressed) {
        use->game.shop.selection_v.boolean = 1;
        use->game.shop.selection_r.boolean = 1;
        if (use->game.shop.selection_r.rect.left != 1920) {
            use->game.shop.selection_r.rect.left = 1920;
            sfSprite_setTextureRect(use->game.shop.selection_r.sprite, use->game.shop.selection_r.rect);
        }
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 744 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1117 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 118 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 962 &&
    use->event.type == sfEvtMouseButtonReleased) {
        use->game.shop.selection_v.boolean = 0;
        use->game.shop.selection_r.boolean = 0;
        if (use->gold >= 50) {
            if (use->game.inventory.potion_one.boolean == 0) {
                use->game.inventory.potion_one.boolean = 1;
                use->game.inventory.potion_one.type = 2;
                use->game.inventory.potion_one.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_shield.png", NULL);
                sfSprite_setTexture(use->game.inventory.potion_one.sprite, use->game.inventory.potion_one.texture, sfTrue);
                use->game.map.boolean = 1;
                use->game.shop.boolean = 0;
                use->gold -= 50;
                return;
            }
            if (use->game.inventory.potion_two.boolean == 0) {
                use->game.inventory.potion_two.boolean = 1;
                use->game.inventory.potion_two.type = 2;
                use->game.inventory.potion_two.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_shield.png", NULL);
                sfSprite_setTexture(use->game.inventory.potion_two.sprite, use->game.inventory.potion_two.texture, sfTrue);
                use->game.map.boolean = 1;
                use->game.shop.boolean = 0;
                use->gold -= 50;
                return;
            }
            if (use->game.inventory.potion_three.boolean == 0) {
                use->game.inventory.potion_three.boolean = 1;
                use->game.inventory.potion_three.type = 2;
                use->game.inventory.potion_three.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_shield.png", NULL);
                sfSprite_setTexture(use->game.inventory.potion_three.sprite, use->game.inventory.potion_three.texture, sfTrue);
                use->game.map.boolean = 1;
                use->game.shop.boolean = 0;
                use->gold -= 50;
                return;
            }
            if (use->game.inventory.potion_four.boolean == 0) {
                use->game.inventory.potion_four.boolean = 1;
                use->game.inventory.potion_four.type = 2;
                use->game.inventory.potion_four.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_shield.png", NULL);
                sfSprite_setTexture(use->game.inventory.potion_four.sprite, use->game.inventory.potion_four.texture, sfTrue);
                use->game.map.boolean = 1;
                use->game.shop.boolean = 0;
                use->gold -= 50;
                return;
            }
            if (use->game.inventory.potion_five.boolean == 0) {
                use->game.inventory.potion_five.type = 2;
                use->game.inventory.potion_five.boolean = 1;
                use->game.inventory.potion_five.texture = sfTexture_createFromFile("sprites/hud/inventory/potion_shield.png", NULL);
                sfSprite_setTexture(use->game.inventory.potion_five.sprite, use->game.inventory.potion_five.texture, sfTrue);
                use->game.map.boolean = 1;
                use->game.shop.boolean = 0;
                use->gold -= 50;
                return;
            }
            use->game.shop.place.boolean = 1;
        } else {
            use->game.shop.money.boolean = 1;
        }
    }
}

void handle_go_to_black(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 1825 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1895 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 970 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 1060 &&
    use->event.type == sfEvtMouseButtonReleased)
        use->game.shop.blacki = 1;
}

void handle_black_market(rpg *use)
{
    if (use->event.key.code == sfKeyEscape
    && use->event.type == sfEvtKeyReleased)
        use->game.shop.blacki = 0;
    if (sfMouse_getPositionRenderWindow(use->window).x >= 363 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1558 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 198 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 383 &&
    use->event.type == sfEvtMouseButtonPressed) {
        use->game.shop.blackselec_r.boolean = 1;
        use->game.shop.blackselec_v.boolean = 1;
        if (use->game.shop.blackselec_r.rect.left != 3840) {
            use->game.shop.blackselec_r.rect.left = 3840;
            sfSprite_setTextureRect(use->game.shop.blackselec_r.sprite, use->game.shop.blackselec_r.rect);
        }
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 363 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1558 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 198 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 383 &&
    use->event.type == sfEvtMouseButtonReleased) {
        use->game.shop.blackselec_r.boolean = 0;
        use->game.shop.blackselec_v.boolean = 0;
        if (use->gold >= 450) {
            use->player.attack_one = attack_set(use, "Canof86");
            sfText_setString(use->game.inventory.one.name.text, use->player.attack_one.name);
            sfText_setString(use->game.inventory.one.damage.text, my_getstr(use->player.attack_one.damage));
            sfText_setString(use->game.inventory.one.pp.text, my_getstr(use->player.attack_one.pp));
            sfText_setString(use->game.inventory.two.name.text, use->player.attack_two.name);
            sfText_setString(use->game.inventory.two.damage.text, my_getstr(use->player.attack_two.damage));
            sfText_setString(use->game.inventory.two.pp.text, my_getstr(use->player.attack_two.pp));
            use->game.shop.blacki = 0;
            use->gold -= 450;
        } else
            use->game.shop.money.boolean = 1;
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 363 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1558 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 444 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 629 &&
    use->event.type == sfEvtMouseButtonPressed) {
        use->game.shop.blackselec_r.boolean = 1;
        use->game.shop.blackselec_v.boolean = 1;
        if (use->game.shop.blackselec_r.rect.left != 1920) {
            use->game.shop.blackselec_r.rect.left = 1920;
            sfSprite_setTextureRect(use->game.shop.blackselec_r.sprite, use->game.shop.blackselec_r.rect);
        }
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 363 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1558 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 444 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 629 &&
    use->event.type == sfEvtMouseButtonReleased) {
        use->game.shop.blackselec_r.boolean = 0;
        use->game.shop.blackselec_v.boolean = 0;
        if (use->gold >= 500) {
            use->player.attack_one = attack_set(use, "Finish");
            sfText_setString(use->game.inventory.one.name.text, use->player.attack_one.name);
            sfText_setString(use->game.inventory.one.damage.text, my_getstr(use->player.attack_one.damage));
            sfText_setString(use->game.inventory.one.pp.text, my_getstr(use->player.attack_one.pp));
            sfText_setString(use->game.inventory.two.name.text, use->player.attack_two.name);
            sfText_setString(use->game.inventory.two.damage.text, my_getstr(use->player.attack_two.damage));
            sfText_setString(use->game.inventory.two.pp.text, my_getstr(use->player.attack_two.pp));
            use->game.shop.blacki = 0;
            use->gold -= 500;
        } else
            use->game.shop.money.boolean = 1;
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 363 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1558 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 679 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 864 &&
    use->event.type == sfEvtMouseButtonPressed) {
        use->game.shop.blackselec_r.boolean = 1;
        use->game.shop.blackselec_v.boolean = 1;
        if (use->game.shop.blackselec_r.rect.left != 0) {
            use->game.shop.blackselec_r.rect.left = 0;
            sfSprite_setTextureRect(use->game.shop.blackselec_v.sprite, use->game.shop.blackselec_v.rect);
        }
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 363 &&
    sfMouse_getPositionRenderWindow(use->window).x <= 1558 &&
    sfMouse_getPositionRenderWindow(use->window).y >= 679 &&
    sfMouse_getPositionRenderWindow(use->window).y <= 864 &&
    use->event.type == sfEvtMouseButtonReleased) {
        use->game.shop.blackselec_r.boolean = 0;
        use->game.shop.blackselec_v.boolean = 0;
        if (use->gold >= 550) {
            use->player.attack_one = attack_set(use, "ConfirmationConfirmate");
            sfText_setString(use->game.inventory.one.name.text, use->player.attack_one.name);
            sfText_setString(use->game.inventory.one.damage.text, my_getstr(use->player.attack_one.damage));
            sfText_setString(use->game.inventory.one.pp.text, my_getstr(use->player.attack_one.pp));
            sfText_setString(use->game.inventory.two.name.text, use->player.attack_two.name);
            sfText_setString(use->game.inventory.two.damage.text, my_getstr(use->player.attack_two.damage));
            sfText_setString(use->game.inventory.two.pp.text, my_getstr(use->player.attack_two.pp));
            use->game.shop.blacki = 0;
            use->gold -= 550;
        } else
            use->game.shop.money.boolean = 1;
    }
}

int handle_shop_event(rpg *use)
{
    if (use->event.type == sfEvtClosed) {
        use->close = 1;
        use->game.exit = 1;
        use->game.shop.boolean = 0;
        return (1);
    }
    if (use->game.shop.blacki == 0) {
        if (use->event.key.code == sfKeyEscape &&
            use->game.shop.place.boolean == 0 &&
            use->game.shop.money.boolean == 0 &&
            use->event.type == sfEvtKeyReleased) {
            use->game.map.boolean = 1;
            use->game.shop.boolean = 0;
        }
        handle_life_po(use);
        handle_shield_po(use);
        handle_xp_po(use);
        handle_go_to_black(use);
    } else
        handle_black_market(use);
    if (use->game.shop.place.boolean == 1)
        if (use->event.key.code == sfKeyEscape
        && use->event.type == sfEvtKeyReleased)
            use->game.shop.place.boolean = 0;
    else if (use->game.shop.money.boolean == 1) {
        if (use->event.key.code == sfKeyEscape 
        && use->event.type == sfEvtKeyReleased)
            use->game.shop.money.boolean = 0;
    }
}

void button_in_green_shop(rpg *use)
{
    if (use->game.shop.blacki == 1) {
        sfRenderWindow_drawSprite(use->window, use->game.shop.black.sprite, NULL);
        if (sfMouse_getPositionRenderWindow(use->window).x >= 363 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 1558 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 198 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 383 &&
        use->game.shop.blackselec_v.boolean == 0) {
            if (use->game.shop.blackselec_v.rect.left != 3840) {
                use->game.shop.blackselec_v.rect.left = 3840;
                sfSprite_setTextureRect(use->game.shop.blackselec_v.sprite, use->game.shop.blackselec_v.rect);
            }
            sfRenderWindow_drawSprite(use->window, use->game.shop.blackselec_v.sprite, NULL);
        }
        if (sfMouse_getPositionRenderWindow(use->window).x >= 363 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 1558 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 444 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 629 &&
        use->game.shop.blackselec_v.boolean == 0) {
            if (use->game.shop.blackselec_v.rect.left != 1920) {
                use->game.shop.blackselec_v.rect.left = 1920;
                sfSprite_setTextureRect(use->game.shop.blackselec_v.sprite, use->game.shop.blackselec_v.rect);
            }
            sfRenderWindow_drawSprite(use->window, use->game.shop.blackselec_v.sprite, NULL);
        }
        if (sfMouse_getPositionRenderWindow(use->window).x >= 363 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 1558 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 679 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 864 &&
        use->game.shop.blackselec_v.boolean == 0) {
            if (use->game.shop.blackselec_v.rect.left != 0) {
                use->game.shop.blackselec_v.rect.left = 0;
                sfSprite_setTextureRect(use->game.shop.blackselec_v.sprite, use->game.shop.blackselec_v.rect);
            }
            sfRenderWindow_drawSprite(use->window, use->game.shop.blackselec_v.sprite, NULL);
        }
        if (use->game.shop.blackselec_r.boolean == 1)
            sfRenderWindow_drawSprite(use->window, use->game.shop.blackselec_r.sprite, NULL);
    } else {
        if (sfMouse_getPositionRenderWindow(use->window).x >= 251 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 684 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 118 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 962 &&
        use->event.type == sfEvtMouseButtonPressed) {
            use->game.shop.blackselec_v.boolean = 1;
            use->game.shop.blackselec_r.boolean = 1;
            if (use->game.shop.selection_v.rect.left != 0) {
                use->game.shop.selection_v.rect.left = 0;
                sfSprite_setTextureRect(use->game.shop.selection_v.sprite, use->game.shop.selection_v.rect);
            }
            sfRenderWindow_drawSprite(use->window, use->game.shop.selection_v.sprite, NULL);
        }
        if (sfMouse_getPositionRenderWindow(use->window).x >= 1235 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 1668 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 118 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 962 &&
        use->game.shop.selection_v.boolean == 0) {
            if (use->game.shop.selection_v.rect.left != 3840) {
                use->game.shop.selection_v.rect.left = 3840;
                sfSprite_setTextureRect(use->game.shop.selection_v.sprite, use->game.shop.selection_v.rect);
            }
            sfRenderWindow_drawSprite(use->window, use->game.shop.selection_v.sprite, NULL);
        }
        if (sfMouse_getPositionRenderWindow(use->window).x >= 744 &&
        sfMouse_getPositionRenderWindow(use->window).x <= 1117 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 118 &&
        sfMouse_getPositionRenderWindow(use->window).y <= 962 &&
        use->event.type == sfEvtMouseButtonPressed) {
            if (use->game.shop.selection_v.rect.left != 1920) {
                use->game.shop.selection_v.rect.left = 1920;
                sfSprite_setTextureRect(use->game.shop.selection_v.sprite, use->game.shop.selection_v.rect);
            }
            sfRenderWindow_drawSprite(use->window, use->game.shop.selection_v.sprite, NULL);
        }
        if (use->game.shop.selection_r.boolean == 1)
            sfRenderWindow_drawSprite(use->window, use->game.shop.selection_r.sprite, NULL);
    }
    if (use->game.shop.place.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->game.shop.place.sprite, NULL);
    if (use->game.shop.money.boolean == 1)
        sfRenderWindow_drawSprite(use->window, use->game.shop.money.sprite, NULL);
}

int my_shop(rpg *use)
{
    sfRenderWindow_drawSprite(use->window, use->game.shop.back.sprite, NULL);
    button_in_green_shop(use);
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (handle_shop_event(use) == 1)
            return (1);
    sfRenderWindow_display(use->window);
    return (0);
}