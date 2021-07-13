/*
** EPITECH PROJECT, 2021
** final
** File description:
** handle_volume
*/

#include "function.h"

void handle_volume(rpg *use)
{
    use->volume = (use->menu.set.sound.rect.width / 7);
    sfText_setString(use->menu.set.nb.text, my_getstr(use->volume));
    sfSound_setVolume(use->music.menu.sound, use->volume);
    sfSound_setVolume(use->music.effect.sound, use->volume);
    sfSound_setVolume(use->music.main_theme.sound, use->volume);
    sfSound_setVolume(use->music.thanos.sound, use->volume);
    sfSound_setVolume(use->music.captain.sound, use->volume);
    sfSound_setVolume(use->music.ironman.sound, use->volume);
    sfSound_setVolume(use->music.thor.sound, use->volume);
}