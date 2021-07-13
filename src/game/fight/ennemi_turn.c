/*
** EPITECH PROJECT, 2021
** game
** File description:
** ennemi_turn
*/

#include "function.h"

void real_animation_ennemi_attack(rpg *use)
{
    use->game.fight.back.clock.time = sfClock_getElapsedTime\
    (use->game.fight.back.clock.clock);
    use->game.fight.back.clock.seconds = \
    use->game.fight.back.clock.time.microseconds / 1000000.0;
    if (use->game.fight.back.clock.seconds > 0.0025) {
        if (use->game.fight.ennemi.boolean == 0) {
            use->game.fight.ennemi.pos.x -= 20;
        } else
            use->game.fight.ennemi.pos.x += 20;
        sfClock_restart(use->game.fight.back.clock.clock);
    }
    sfSprite_setPosition(use->game.fight.ennemi.sprite, \
    use->game.fight.ennemi.pos);
}

int animation_ennemi_attack(rpg *use)
{
    display_fight(use);
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (use->event.type == sfEvtClosed) {
            use->close = 1;
            use->game.exit = 1;
            use->game.fight.boolean = 0;
            use->game.fight.ennemi.boolean = 2;
            return (1);
        }
    real_animation_ennemi_attack(use);
    if (use->game.fight.ennemi.boolean == 0 && use->game.fight.ennemi.pos.x - (use->player.pos.x - 960) \
    <= 320)
        use->game.fight.ennemi.boolean = 1;
    if (use->game.fight.ennemi.boolean == 1 && use->game.fight.ennemi.pos.x - (use->player.pos.x - 960) \
    >= 1320)
        use->game.fight.ennemi.boolean = 2;
    sfRenderWindow_display(use->window);
    return (0);
}

int ennemi_turn(rpg *use)
{
    int attack = rand() % 2;

    if (end_fight(use) == 1)
        return (1);
    if (attack == 0) {
        use->player.life -= atoi(use->files.fight[11]);
        use->game.fight.to_order = "The ennemi attack you!";
        sfText_setString(use->game.fight.order.text, use->game.fight.to_order);
        while (use->game.fight.ennemi.boolean != 2 && \
        animation_ennemi_attack(use) == 0);
        use->game.fight.ennemi.boolean = 0;
    } else {
        use->player.life -= atoi(use->files.fight[18]);
        use->game.fight.to_order = "The ennemi attack you!";
        sfText_setString(use->game.fight.order.text, use->game.fight.to_order);
        while (use->game.fight.ennemi.boolean != 2 && \
        animation_ennemi_attack(use) == 0);
        use->game.fight.ennemi.boolean = 0;
    }
    if (end_fight(use) == 1)
        return (1);
    return (0);
}