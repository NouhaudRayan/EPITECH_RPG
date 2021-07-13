/*
** EPITECH PROJECT, 2021
** game
** File description:
** display_level
*/

#include "function.h"

void handle_display_ennem(rpg *use)
{
    use->game.player.tmp_ennemi = use->game.player.ennemi;
    for (int i = 0; i < 28; i++) {
        sfRenderWindow_drawSprite(use->window, \
        use->game.player.ennemi->ennemi.sprite, NULL);
        use->game.player.ennemi = use->game.player.ennemi->next;
    }
    use->game.player.ennemi = use->game.player.tmp_ennemi;
}

void display_chest(rpg *use)
{
    use->game.map.tmp_chest = use->game.map.chest;
    for (int i = 0; i < 6; i++) {
        sfRenderWindow_drawSprite(use->window, use->game.map.chest->chest.sprite, NULL);
        use->game.map.chest = use->game.map.chest->next;
    }
    use->game.map.chest = use->game.map.tmp_chest;
}

void display_level(rpg *use)
{
    sfRenderWindow_drawSprite(use->window, \
    use->game.background.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, \
    use->game.map.spaceship.sprite, NULL);
    display_chest(use);
    sfRenderWindow_drawSprite(use->window, use->game.hud.hud.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.life.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.shield.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.xp.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->player.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.player.dog.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.hud.model.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.player.golem.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.player.centa.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.player.thanos.sprite, NULL);
    handle_display_event(use);
    handle_display_ennem(use);
    sfRenderWindow_drawText(use->window, use->game.hud.pseudo.text, NULL);
    sfRenderWindow_drawText(use->window, use->game.hud.gold.text, NULL);
    sfRenderWindow_drawText(use->window, use->game.hud.level.text, NULL);
    sfRenderWindow_drawText(use->window, use->game.hud.level_nb.text, NULL);
}