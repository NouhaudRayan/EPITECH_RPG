/*
** EPITECH PROJECT, 2021
** final
** File description:
** animation_ennemi
*/

#include "function.h"

void animation_ennemi_gauche(rpg *use)
{
    use->game.player.ennemi->ennemi.clock.time = \
    sfClock_getElapsedTime(use->game.player.ennemi->ennemi.clock.clock);
    use->game.player.ennemi->ennemi.clock.seconds = \
    use->game.player.ennemi->ennemi.clock.time.microseconds / 1000000.0;
    if (use->game.player.ennemi->ennemi.clock.seconds > 0.3) {
        use->game.player.ennemi->ennemi.rect.left += 45;
        use->game.player.ennemi->ennemi.pos.x -= 32;
        use->game.player.ennemi->ennemi.y--;
        if (use->game.player.ennemi->ennemi.rect.left >= 95) {
            use->game.player.ennemi->ennemi.rect.left = 0;
        }
        sfClock_restart(use->game.player.ennemi->ennemi.clock.clock);
    }
    sfSprite_setTextureRect(use->game.player.ennemi->ennemi.sprite, \
    use->game.player.ennemi->ennemi.rect);
    sfSprite_setPosition(use->game.player.ennemi->ennemi.sprite, \
    use->game.player.ennemi->ennemi.pos);
}

void animation_ennemi_droite(rpg *use)
{
    use->game.player.ennemi->ennemi.clock.time = \
    sfClock_getElapsedTime(use->game.player.ennemi->ennemi.clock.clock);
    use->game.player.ennemi->ennemi.clock.seconds = \
    use->game.player.ennemi->ennemi.clock.time.microseconds / 1000000.0;
    if (use->game.player.ennemi->ennemi.clock.seconds > 0.3) {
        use->game.player.ennemi->ennemi.rect.left += 50;
        use->game.player.ennemi->ennemi.pos.x += 32;
        use->game.player.ennemi->ennemi.y++;
        if (use->game.player.ennemi->ennemi.rect.left >= 95) {
            use->game.player.ennemi->ennemi.rect.left = 0;
        }
        sfClock_restart(use->game.player.ennemi->ennemi.clock.clock);
    }
    sfSprite_setTextureRect(use->game.player.ennemi->ennemi.sprite, \
    use->game.player.ennemi->ennemi.rect);
    sfSprite_setPosition(use->game.player.ennemi->ennemi.sprite, \
    use->game.player.ennemi->ennemi.pos);
}

void animation_ennemi_haut(rpg *use)
{
    use->game.player.ennemi->ennemi.clock.time = \
    sfClock_getElapsedTime(use->game.player.ennemi->ennemi.clock.clock);
    use->game.player.ennemi->ennemi.clock.seconds = \
    use->game.player.ennemi->ennemi.clock.time.microseconds / 1000000.0;
    if (use->game.player.ennemi->ennemi.clock.seconds > 0.3) {
        use->game.player.ennemi->ennemi.rect.left += 45;
        use->game.player.ennemi->ennemi.pos.y -= 32;
        use->game.player.ennemi->ennemi.x--;
        if (use->game.player.ennemi->ennemi.rect.left >= 95) {
            use->game.player.ennemi->ennemi.rect.left = 0;
        }
        sfClock_restart(use->game.player.ennemi->ennemi.clock.clock);
    }
    sfSprite_setTextureRect(use->game.player.ennemi->ennemi.sprite, \
    use->game.player.ennemi->ennemi.rect);
    sfSprite_setPosition(use->game.player.ennemi->ennemi.sprite, \
    use->game.player.ennemi->ennemi.pos);
}

void animation_ennemi_bas(rpg *use)
{
    use->game.player.ennemi->ennemi.clock.time = \
    sfClock_getElapsedTime(use->game.player.ennemi->ennemi.clock.clock);
    use->game.player.ennemi->ennemi.clock.seconds = \
    use->game.player.ennemi->ennemi.clock.time.microseconds / 1000000.0;
    if (use->game.player.ennemi->ennemi.clock.seconds > 0.3) {
        use->game.player.ennemi->ennemi.rect.left += 50;
        use->game.player.ennemi->ennemi.pos.y += 32;
        use->game.player.ennemi->ennemi.x++;
        if (use->game.player.ennemi->ennemi.rect.left >= 95) {
            use->game.player.ennemi->ennemi.rect.left = 0;
        }
        sfClock_restart(use->game.player.ennemi->ennemi.clock.clock);
    }
    sfSprite_setTextureRect(use->game.player.ennemi->ennemi.sprite, \
    use->game.player.ennemi->ennemi.rect);
    sfSprite_setPosition(use->game.player.ennemi->ennemi.sprite, \
    use->game.player.ennemi->ennemi.pos);
}
