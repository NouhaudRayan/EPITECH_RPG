/*
** EPITECH PROJECT, 2021
** game
** File description:
** player_turn
*/

#include "function.h"

void real_animation_player_attack(rpg *use)
{
    use->game.fight.back.clock.time = \
    sfClock_getElapsedTime(use->game.fight.back.clock.clock);
    use->game.fight.back.clock.seconds = \
    use->game.fight.back.clock.time.microseconds / 1000000.0;
    if (use->game.fight.back.clock.seconds > 0.0025) {
        if (use->game.fight.player.boolean == 0) {
            use->game.fight.player.pos.x += 20;
        } else
            use->game.fight.player.pos.x -= 20;
        sfClock_restart(use->game.fight.back.clock.clock);
    }
    sfSprite_setPosition(use->game.fight.player.sprite, \
    use->game.fight.player.pos);
}

int animation_player_attack(rpg *use)
{
    display_fight(use);
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (use->event.type == sfEvtClosed) {
            use->close = 1;
            use->game.exit = 1;
            use->game.fight.boolean = 0;
            use->game.fight.player.boolean = 2;
            return (1);
        }
    real_animation_player_attack(use);
    if (use->game.fight.player.boolean == 0 && use->game.fight.player.pos.x - (use->player.pos.x - 960) >= 1320) {
        use->game.fight.player.boolean = 1;
    }
    if (use->game.fight.player.boolean == 1 && \
    use->game.fight.player.pos.x - (use->player.pos.x - 960) <= 320)
        use->game.fight.player.boolean = 2;
    sfRenderWindow_display(use->window);
    return (0);
}

int player_turn(rpg *use, int nb)
{
    int life = atoi(use->files.fight[4]);

    if (end_fight(use) == 1)
        return (1);
    if (nb == 1) {
        life -= use->player.attack_one.damage;
        use->files.fight[4] = my_getstr(life);
        use->player.attack_one.pp--;
        use->game.fight.to_order = "You attack the ennemi!";
        sfText_setString(use->game.fight.order.text, use->game.fight.to_order);
        use->game.fight.player.boolean = 0;
        while (use->game.fight.player.boolean != 2 && \
        animation_player_attack(use) == 0);
        use->game.fight.player.boolean = 0;
    } else {
        life -= use->player.attack_two.damage;
        use->files.fight[4] = my_getstr(life);
        use->player.attack_two.pp--;
        use->game.fight.pop_arrow.boolean = 0;
        use->game.fight.to_order = "You attack the ennemi!";
        sfText_setString(use->game.fight.order.text, use->game.fight.to_order);
        use->game.fight.player.boolean = 0;
        while (use->game.fight.player.boolean != 2 && \
        animation_player_attack(use) == 0);
        use->game.fight.player.boolean = 0;
    }
    use->game.fight.pop_arrow.boolean = 0;
    if (end_fight(use) == 1)
        return (1);
    return (0);
}