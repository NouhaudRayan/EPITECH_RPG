/*
** EPITECH PROJECT, 2021
** fill up
** File description:
** fill_up_struct
*/

#include "function.h"

sound_set_t sound_set(sound_set_t sound, char *filesname, int volume)
{
    sound.sound = sfSound_create();
    sound.soundbuffer = sfSoundBuffer_createFromFile(filesname);

    sfSound_setBuffer(sound.sound, sound.soundbuffer);
    sfSound_setVolume(sound.sound, volume);
    return (sound);
}

void fill_up_music_set_t(rpg *use)
{
    use->music.captain = sound_set(use->music.captain, "sprites/music/choose_captain.ogg", use->volume);
    use->music.ironman = sound_set(use->music.ironman, "sprites/music/choose_iron_man.ogg", use->volume);
    use->music.thor = sound_set(use->music.thor, "sprites/music/choose_thor.ogg", use->volume);
    use->music.intro = sound_set(use->music.intro, "sprites/music/intro.ogg", use->volume);
    use->music.menu = sound_set(use->music.menu, "sprites/music/menu_theme.ogg", use->volume);
    use->music.effect = sound_set(use->music.effect, "sprites/music/menu_selection.ogg", use->volume);
    use->music.thanos = sound_set(use->music.thanos, "sprites/music/thanos_theme.ogg", use->volume);
    use->music.fight = sound_set(use->music.fight, "sprites/music/fight_theme.ogg", use->volume);
    use->music.main_theme = sound_set(use->music.main_theme, "sprites/music/main_theme.ogg", use->volume);
    sfSound_setLoop(use->music.menu.sound, sfTrue);
    sfSound_play(use->music.intro.sound);
    use->music.thanos_t = 0;
    use->music.main_t = 0;
}

void fill_up_shop_set_t(rpg *use)
{
    use->game.shop.boolean = 0;
    use->game.shop.blacki = 0;
    background_set(&use->game.shop.back, "sprites/hud/shop/shop_font.png", dimension(0, 0, 1920, 1080), position(0, 0));
    background_set(&use->game.shop.black, "sprites/hud/shop/black_market_font.png", dimension(0, 0, 1920, 1080), position(0, 0));
    button_set(&use->game.shop.selection_v, "sprites/hud/shop/green_shop.png", dimension(0, 0, 1920, 1080), position(0, 0));
    button_set(&use->game.shop.selection_r, "sprites/hud/shop/red_shop.png", dimension(0, 0, 1920, 1080), position(0, 0));
    button_set(&use->game.shop.blackselec_v, "sprites/hud/shop/marchenoir_green.png", dimension(0, 0, 1920, 1080), position(0, 0));
    button_set(&use->game.shop.blackselec_r, "sprites/hud/shop/marchenoir_red.png", dimension(0, 0, 1920, 1080), position(0, 0));   
    button_set(&use->game.shop.money, "sprites/hud/shop/gold.png", dimension(0, 0, 1920, 1080), position(0, 0));    
    button_set(&use->game.shop.place, "sprites/hud/shop/place.png", dimension(0, 0, 1920, 1080), position(0, 0));    
}

void fill_up_struct(rpg *use)
{
    srand(getpid());
    use->gold = 9999;
    use->close = 0;
    use->difficulti = 1;
    use->volume = 30;
    use->menu.launch.close = 0;
    use->buffer = buffer_set(use->buffer);
    fill_up_file_set_t(use);
    use->player = player_set(use, use->player);
    fill_up_pnj_set_t(use);
    fill_up_shop_set_t(use);
    fill_up_game_set_t(use);
    fill_up_menu_set_t(use);
    fill_up_load_set_t(use);
    fill_up_music_set_t(use);
    use->window = sfRenderWindow_create(use->buffer, \
    "A V E N G E R S", sfClose, NULL);
}