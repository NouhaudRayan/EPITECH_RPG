/*
** EPITECH PROJECT, 2021
** STRUCT
** File description:
** STRUCT
*/

#ifndef STRUCT
#define STRUCT

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/Window/Event.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>
#include "function.h"

typedef struct {
    sfFont *font;
    sfText *text;
    sfVector2f pos;
    sfVector2f scale;
    char *content;
} texte_set_t;

typedef struct {
    sfTime time;
    float seconds;
    sfClock *clock;
} clock_set_t;

typedef struct {
    sfVector2f pos;
    sfIntRect rect;
    sfSprite *sprite;
    clock_set_t clock;
    sfTexture *texture;
} background_set_t;

typedef struct {
    int boolean;
    int type;
    sfIntRect rect;
    sfVector2f pos;
    sfSprite *sprite;
    sfTexture *texture;
} button_set_t;

typedef struct {
    int music;
    sfSound *sound;
    sfSoundBuffer *soundbuffer;
} sound_set_t;

typedef struct {
    int boolean;
    background_set_t start;
    background_set_t end;
} intro_set_t;

typedef struct {
    int boolean;
    button_set_t iron_man;
    button_set_t captaine_america;
    button_set_t the_thor;
    button_set_t sure;
    background_set_t hud;
    background_set_t iron;
    background_set_t capt;
    background_set_t thor;
    background_set_t perso;
} class_set_t;

typedef struct {
    int boolean;
    background_set_t hud;
    texte_set_t front_key;
    texte_set_t back_key;
    texte_set_t left_key;
    texte_set_t right_key;
    texte_set_t map_key;
    texte_set_t inventory_key;
    texte_set_t used_key;
    button_set_t front;
    button_set_t back;
    button_set_t right;
    button_set_t left;
    button_set_t map;
    button_set_t inventory;
    button_set_t used;
    button_set_t resolution_l;
    button_set_t resolution_r;
} swipe_set_t;

typedef struct {
    int boolean;
    int value;
    button_set_t fps;
    button_set_t fps_l;
    button_set_t fps_r;
    button_set_t big_a;
    button_set_t sound;
    texte_set_t nb;
    button_set_t difficult;
    button_set_t difficult_r;
    button_set_t difficult_l;
    swipe_set_t swipe;
    button_set_t resolution;
    button_set_t resolution_l;
    button_set_t resolution_r;
} setting_set_t;

typedef struct {
    int close;
    int boolean;
    button_set_t exit;
    button_set_t play;
    button_set_t settings;
    background_set_t hud;
} launcher_set_t;

typedef struct {
    int boolean; 
    char *pseudo;
    texte_set_t text;
    button_set_t arrow;
    background_set_t back;
} setname_set_t;

typedef struct {
    intro_set_t intro;
    class_set_t choose;
    setting_set_t set;
    launcher_set_t launch;
    setname_set_t name;
    background_set_t blurry;
} menu_set_t;

typedef struct {
    sound_set_t thor;
    sound_set_t menu;
    sound_set_t intro;
    sound_set_t effect;
    sound_set_t captain;
    sound_set_t ironman;
    sound_set_t main_theme;
    sound_set_t fight;
    sound_set_t thanos;
    int main_t;
    int thanos_t;
} music_set_t;

typedef struct {
    background_set_t back;
    background_set_t round;
    background_set_t barre;
} loading_set_t;

typedef struct {
    sfIntRect rect;
    sfVector2f pos;
    sound_set_t effect;
    sfSprite *sprite;
    sfTexture *texture;
} spaceship_set_t;

typedef struct {
    int boolean;
    background_set_t back;
    background_set_t interact;
    spaceship_set_t spaceship;
} space_set_t;

typedef struct {
    background_set_t hud;
    button_set_t life;
    button_set_t xp;
    button_set_t shield;
    button_set_t player;
    button_set_t pause;
    clock_set_t clock;
    background_set_t action;
    button_set_t model;
    texte_set_t pseudo;
    texte_set_t gold;
    texte_set_t level;
    texte_set_t level_nb;
} hud_set_t;

typedef struct {
    int boolean;
    background_set_t back;
    button_set_t arrow;
    background_set_t pop_up;
    button_set_t pop_arrow;
    texte_set_t attack1;
    texte_set_t attack2;
    texte_set_t order;
    texte_set_t pp_1;
    texte_set_t dmg_1;
    texte_set_t pp_2;
    texte_set_t dmg_2;
    char *to_order;
    button_set_t player;
    background_set_t dead_screen;
    button_set_t button_exit;
    button_set_t button_menu;
    button_set_t ennemi;
} fight_set_t;

typedef struct {
    char *name;
    int pp;
    int damage;
} attack_set_t;

typedef struct {
    attack_set_t attack_one;
    attack_set_t attack_two;
    int xp;
    int life;
    int x;
    int y;
    char *txt;
    int moove;
    int damage;
    int shield;
    int check_msg;
    sfIntRect rect;
    sfVector2f pos;
    sfSprite *sprite;
    clock_set_t clock;
    sfTexture *texture;
} ennemi_set_t;

typedef struct list list;
struct list
{
    ennemi_set_t ennemi;
    char **path;
    char **set;
    list *next;
};

typedef struct {
    sfIntRect rect;
    sfVector2f pos;
    sfSprite *sprite;
    sfTexture *texture;
} dog_set_t;

typedef struct {
    attack_set_t attack_one;
    attack_set_t attack_two;
    int xp;
    int life;
    int damage;
    int shield;
    sfIntRect rect;
    sfVector2f pos;
    sfSprite *sprite;
    clock_set_t clock;
    sfTexture *texture;
} boss_set_t;

typedef struct {
    list *ennemi;
    list *tmp_ennemi;
    dog_set_t dog;
    boss_set_t thanos;
    boss_set_t golem;
    boss_set_t centa;
    texte_set_t text;
    int rand;
    int i;
    button_set_t box;
    char type;
    char **texte;
    int want_bear;
    int have_bear;
    int finish_bear;
    char *bear_text;
    char *seed_text;
    int want_seed;
    int have_seed;
    int finish_seed;
    int beer;
} personnage_set_t;

typedef struct {
    int quest_one;
    button_set_t sprite_one;
    int quest_two;
    button_set_t sprite_two;
    int quest_three;
    button_set_t sprite_three;
} quest_set_t;

typedef struct {
    int achiev_one;
    button_set_t sprite_one;
    int achiev_two;
    button_set_t sprite_two;
    int achiev_three;
    button_set_t sprite_three;
    int achiev_four;
    button_set_t sprite_four;
    int achiev_five;
} achievements_set_t;

typedef struct {
    float xp;
    int life;
    int level;
    int shield;
    attack_set_t attack_one;
    attack_set_t attack_two;
    sfIntRect rect;
    sfVector2f pos;
    sound_set_t effect;
    sfSprite *sprite;
    sfTexture *texture;
    clock_set_t clock;
} player_set_t;

typedef struct list_c list_c;
struct list_c
{
    button_set_t chest;
    list_c *next;
};

typedef struct {
    int boolean;
    char **map;
    char *files;
    int x_p;
    int y_p;
    background_set_t spaceship;
    list_c *chest;
    list_c *tmp_chest;
    list_c *detect_chest;
    list_c *tmp_detect_chest;
} map_set_t;

typedef struct {
    int boolean;
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f pos;
} mini_map_set_t;

typedef struct {
    int boolean;
    texte_set_t up;
    texte_set_t back;
    texte_set_t right;
    texte_set_t left;
    texte_set_t map;
    texte_set_t inventor;
    texte_set_t use;
    background_set_t menu;
    background_set_t interface;
    background_set_t profil_green;
    background_set_t barre;
    background_set_t red_barre;
    button_set_t play;
    button_set_t quest;
    button_set_t credit;
    button_set_t inventory;
    button_set_t achievement;
    button_set_t sounds;
    button_set_t profil;
    button_set_t touch;
    button_set_t on_black;
    button_set_t off_black;
    button_set_t on_green;
    button_set_t off_green;
    button_set_t on_red;
    button_set_t off_red;
    button_set_t on_green_down;
    button_set_t off_green_down;
    button_set_t on_red_down;
    button_set_t off_red_down;
    button_set_t sound_barre;
} pause_set_t;

typedef struct {
    texte_set_t name;
    texte_set_t damage;
    texte_set_t pp;
} text_attaque_set_t;

typedef struct {
    int boolean;
    background_set_t back;
    text_attaque_set_t actual_two;
    text_attaque_set_t actual_one;
    text_attaque_set_t futur;
    button_set_t annuler;
    button_set_t one;
    button_set_t two;
} change_attack_set_t;

typedef struct {
    background_set_t back;
    button_set_t actual;
    button_set_t futur;
    button_set_t annuler;
    button_set_t one;
} change_armor_set_t;

typedef struct {
    int boolean;
    text_attaque_set_t one;
    text_attaque_set_t two;
    background_set_t back;
    background_set_t action;
    button_set_t helmet;
    button_set_t chesplate;
    button_set_t potion_one;
    button_set_t potion_two;
    button_set_t potion_three;
    button_set_t potion_four;
    button_set_t potion_five;
    background_set_t use_green;
    background_set_t cancel_green;
    int act_1;
    int act_2;
    int act_3;
    int act_4;
    int act_5;
    change_attack_set_t attack;
    change_armor_set_t armor;
} inventory_set_t;

typedef struct {
    int boolean;
    int blacki;
    background_set_t back;
    background_set_t black;
    button_set_t selection_v;
    button_set_t selection_r;
    button_set_t blackselec_v;
    button_set_t blackselec_r;
    button_set_t place;
    button_set_t money;
} shop_set_t;

typedef struct {
    int boolean;
} outro_set_t;

typedef struct {
    int exit;
    sfView *view;
    fight_set_t fight;
    quest_set_t quest;
    achievements_set_t achievement;
    pause_set_t pause;
    inventory_set_t inventory;
    hud_set_t hud;
    mini_map_set_t mini;
    map_set_t map;
    background_set_t background;
    space_set_t space;
    personnage_set_t player;
    shop_set_t shop;
    outro_set_t outro;
} game_set_t;

typedef struct {
    char **player;
    char **attack;
    char **fight;
    char **touch;
    char **png_history;
    char **png_secondary;
    char **png_useless;
    char **ennemi_pos;
    char **item_helmet;
    char **item_chesplate;
    char **item_attack;
    char **pos_chest;
} file_set_t;

typedef struct {
    int volume;
    int close;
    int save;
    float gold;
    float difficulti;
    sfEvent event;
    sfVideoMode buffer;
    sfRenderWindow *window;
    menu_set_t menu;
    music_set_t music;
    loading_set_t load;
    game_set_t game;
    file_set_t files;
    player_set_t player;
} rpg;

#endif /* !STRUCT */