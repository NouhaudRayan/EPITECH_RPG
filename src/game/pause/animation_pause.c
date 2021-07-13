/*
** EPITECH PROJECT, 2021
** animation pause
** File description:
** sous fonction
*/

#include "function.h"

int animation_pause(rpg *use, int x)
{
    animation_blurry(use);
    use->game.pause.interface.clock.time = \
    sfClock_getElapsedTime(use->game.pause.interface.clock.clock);
    use->game.pause.interface.clock.seconds = \
    use->game.pause.interface.clock.time.microseconds / 1000000.0;
    while (sfRenderWindow_pollEvent(use->window, &use->event))
        if (use->event.type == sfEvtClosed) {
            use->game.pause.play.boolean = 0;
            use->menu.launch.exit.boolean = 1;
            sfRenderWindow_close(use->window);
            return (1);
        }
    if (use->game.pause.interface.clock.seconds > 0.0000001) {
        use->game.pause.interface.rect.left += x;
        if (use->game.pause.interface.rect.left > 13440)
            use->game.pause.interface.rect.left = -1920;
        sfClock_restart(use->game.pause.interface.clock.clock);
    }
    red_barre_handle(use);
    sfSprite_setTextureRect(use->game.pause.interface.sprite, \
    use->game.pause.interface.rect);
    sfRenderWindow_drawSprite(use->window, \
    use->game.pause.interface.sprite, NULL);
    sfRenderWindow_drawSprite(use->window, use->game.pause.menu.sprite, NULL);
    sfRenderWindow_display(use->window);
    return (0);
}