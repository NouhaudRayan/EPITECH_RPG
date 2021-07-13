/*
** EPITECH PROJECT, 2021
** handle name event
** File description:
** handle name event
*/

#include "function.h"

int handle_name_event(rpg *use)
{
    if(use->event.type == sfEvtTextEntered) {
        sfSound_play(use->music.effect.sound);
        write_event(use);
    }
    if (use->event.key.code == sfKeyEnter && use->event.type == sfEvtKeyReleased
    && strlen(use->menu.name.pseudo) != 0) {
        use->menu.name.boolean = 0;
        use->menu.choose.boolean = 1;
        sfText_setString(use->game.hud.pseudo.text, use->menu.name.pseudo);
        return (1);
    }
    if (button_pseudo(use) == 1 && strlen(use->menu.name.pseudo) != 0) {
        sfSound_play(use->music.effect.sound);
        use->menu.name.boolean = 0;
        use->menu.choose.boolean = 1;
        sfSprite_setTextureRect(use->menu.name.arrow.sprite, use->menu.name.arrow.rect);
        sfText_setString(use->game.hud.pseudo.text, use->menu.name.pseudo);
        return (1);
    }
    if (use->event.type == sfEvtClosed) {
        use->menu.name.boolean = 0;
        use->game.exit = 1;
        use->close = 1;
        use->menu.launch.close = 1;
        return (1);
    }
    return (0);
}