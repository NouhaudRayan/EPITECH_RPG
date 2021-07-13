/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_swipe
*/

#include "function.h"

int animation_swipe_left(rpg *use)
{
    use->menu.set.swipe.boolean = 0;
    animation_blurry(use);
    sfRenderWindow_drawSprite(use->window, use->menu.launch.hud.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.hud.sprite, NULL);
    use->menu.set.swipe.hud.clock.time = sfClock_getElapsedTime(use->menu.set.swipe.hud.clock.clock);
    use->menu.set.swipe.hud.clock.seconds = use->menu.set.swipe.hud.clock.time.microseconds / 1000000.0;
    if (use->menu.set.swipe.hud.clock.seconds > 0.00001) {
        use->menu.set.swipe.hud.pos.x -= 20;
        sfClock_restart(use->menu.set.swipe.hud.clock.clock);
    }
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (use->event.type == sfEvtClosed) {
            use->close = 1;
            use->game.exit = 1;
            use->menu.set.boolean = 0;
            use->menu.launch.close = 1;
            return (1);
        }
    sfSprite_setPosition(use->menu.set.swipe.hud.sprite, use->menu.set.swipe.hud.pos);
    sfRenderWindow_display(use->window);
    return (0);
}

int animation_swipe_right(rpg *use)
{
    use->menu.set.swipe.boolean = 1;
    animation_blurry(use);
    sfRenderWindow_drawSprite(use->window, use->menu.launch.hud.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->menu.set.swipe.hud.sprite, NULL);
    use->menu.set.swipe.hud.clock.time = sfClock_getElapsedTime(use->menu.set.swipe.hud.clock.clock);
    use->menu.set.swipe.hud.clock.seconds = use->menu.set.swipe.hud.clock.time.microseconds / 1000000.0;
    if (use->menu.set.swipe.hud.clock.seconds > 0.00001) {
        use->menu.set.swipe.hud.pos.x += 20;
        sfClock_restart(use->menu.set.swipe.hud.clock.clock);
    }
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (use->event.type == sfEvtClosed) {
            use->close = 1;
            use->game.exit = 1;
            use->menu.set.boolean = 0;
            use->menu.launch.close = 1;
            return (1);
        }
    sfSprite_setPosition(use->menu.set.swipe.hud.sprite, use->menu.set.swipe.hud.pos);
    sfRenderWindow_display(use->window);
    return (0);
}

void handle_swipe(rpg *use)
{
    if (sfMouse_getPositionRenderWindow(use->window).x >= 0 && sfMouse_getPositionRenderWindow(use->window).x <= 100 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 18 && sfMouse_getPositionRenderWindow(use->window).y <= 158 &&
        use->event.type == sfEvtMouseButtonReleased) {
        while (use->menu.set.swipe.hud.pos.x <= -15 && animation_swipe_right(use) == 0);
    }
    if (sfMouse_getPositionRenderWindow(use->window).x >= 593 && sfMouse_getPositionRenderWindow(use->window).x <= 694 &&
        sfMouse_getPositionRenderWindow(use->window).y >= 18 && sfMouse_getPositionRenderWindow(use->window).y <= 158 &&
        use->event.type == sfEvtMouseButtonReleased) {
        sfSound_play(use->music.effect.sound);
        while (use->menu.set.swipe.hud.pos.x >= -600 && animation_swipe_left(use) == 0);
    }
}