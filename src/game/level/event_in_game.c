/*
** EPITECH PROJECT, 2021
** game
** File description:
** event_in_game
*/

#include "function.h"

void animation_model(rpg *use)
{
    use->game.hud.clock.time = \
    sfClock_getElapsedTime(use->game.hud.clock.clock);
    use->game.hud.clock.seconds = \
    use->game.hud.clock.time.microseconds / 1000000.0;
    if (use->game.hud.clock.seconds > 1) {
        use->game.hud.model.rect.top += 50;
        if (use->game.hud.model.rect.top >= 180)
            use->game.hud.model.rect.top = 0;
        sfClock_restart(use->game.hud.clock.clock);
    }
    sfSprite_setTextureRect(use->game.hud.model.sprite, \
    use->game.hud.model.rect);
}

void event_in_game(rpg *use)
{
    if (use->game.map.map[use->game.map.y_p] \
    [use->game.map.x_p - 1] == 'V') {
        use->game.space.interact.pos = position((use->player.pos.x - 960) \
        + 500, (use->player.pos.y - 540) + 950);
        sfSprite_setPosition(use->game.space.interact.sprite, \
        use->game.space.interact.pos);
        animation_press_e(use);
    }
    detect_fight(use);
    animation_model(use);
    if (use->player.pos.y <= 2728 && use->music.main_t == 1) {
        use->music.main_t = 0;
        use->music.thanos_t = 1;
        sfSound_stop(use->music.main_theme.sound);
        sfSound_play(use->music.thanos.sound);
    } else if (use->player.pos.y > 2728 && use->music.thanos_t == 1) {
        use->music.main_t = 1;
        use->music.thanos_t = 0;
        sfSound_stop(use->music.thanos.sound);
        sfSound_play(use->music.main_theme.sound);
    }
}