/*
** EPITECH PROJECT, 2021
** FUNCTION
** File description:
** FUNCTION
*/

#ifndef FUNCTION
#define FUNCTION

#include "struct.h"

void my_rpg(rpg *);

void check_distri(rpg *use);
void check_seed(rpg *use);
int wich_pnj(rpg *use, int x , int y);
void check_quest(rpg *use);

void new_string(rpg *use, char *text);

int menu(rpg *);

int my_intro(rpg *);

void fill_up_struct(rpg *);

sfVideoMode buffer_set(sfVideoMode);

void fill_up_pause_set_t_four(rpg *);

clock_set_t clock_set(clock_set_t);

void background_set(background_set_t *, char *, sfIntRect, sfVector2f);

sfIntRect dimension(int, int, int, int);

sfVector2f position(int , int);

void fill_up_intro_set_t(rpg *);

int my_choice(rpg *);

void button_set(button_set_t *, char *, sfIntRect, sfVector2f);

void animation_blurry(rpg *);

void handle_q(rpg *);

void handle_enter(rpg *);

void handle_choice(rpg *);

int handle_event_choice(rpg *);

void button_display(rpg *);

void animation_playerchoice(rpg *);

void animation_intro(rpg *);

void fill_up_class_set_t(rpg *);

void mem_set(rpg *);

void text_set(texte_set_t *, char *, sfVector2f, sfColor, int);

sfColor colors(int, int, int);

void button_name_display(rpg *);

int button_pseudo(rpg *);

int handle_name_event(rpg *);

int my_name(rpg *);

int write_event(rpg *);

void fill_up_setname_set_t(rpg *);

int my_launch(rpg *);

int button_options(rpg *);

int button_exit(rpg *);

int button_start(rpg *);

void button_in_green(rpg *);

int handle_launch_event(rpg *);

void round_load_anime(rpg *);

void barre_load_anim(rpg *);

int my_loading(rpg *);

void fill_up_menu_set_t(rpg *);

void fill_up_load_set_t(rpg *);

void fill_up_launcher_set_t(rpg *);

void my_rpg(rpg *);

void background_set(background_set_t *, char *, sfIntRect, sfVector2f);

sfVideoMode buffer_set(sfVideoMode);

void button_set(button_set_t *, char *, sfIntRect, sfVector2f);

clock_set_t clock_set(clock_set_t);

sfColor colors(int, int, int);

sfIntRect dimension(int, int, int, int);

sfVector2f position(int, int);

void fill_up_struct(rpg *);

void fill_up_load_set_t(rpg *);

char *file_to_str(char const *);

char **str_to_word_array(char const *);

void barre_load_anim(rpg *);

player_set_t player_set(rpg *use, player_set_t player);

void fill_up_game_set_t(rpg *);

void fill_up_level_set_t(rpg *);

char **create_files(char *);

void fill_up_file_set_t(rpg *);

void fill_up_hud_set_t(rpg *);

attack_set_t attack_set(rpg *, char *);

int my_game(rpg *);

int my_level(rpg *);

void spaceship_set(spaceship_set_t *, char *, sfIntRect, sfVector2f);

void fill_up_space_set_t(rpg *);

void animation_press_e(rpg *);

void event_in_game(rpg *);

void display_level(rpg *);

void animation_player(rpg *, int);

void handle_animation_move_player(rpg *, int);

void handle_player_updown_move(rpg *);

void handle_player_rightleft_move(rpg *);

int my_fight(rpg *);

void handle_arrow_popless(rpg *);

void display_fight(rpg *);

void animation_arrow_fight(rpg *);

int handle_event_fight(rpg *);

int handle_enter_pop(rpg *);

void handle_arrow_pop(rpg *);

void handle_enter_popless(rpg *);

char *my_getstr(int);

int find_attack(rpg *, char *);

void handle_change_hud(rpg *);

int handle_event_level(rpg *);

void handle_space_and_pause_choice(rpg *);

int end_fight(rpg *);

int ennemi_turn(rpg *);

void handle_display_event(rpg *);

void handle_display_ennemi(rpg *);

int player_turn(rpg *, int);

void fill_up_fight_set_t(rpg *);

void list_ennemi_set(rpg *);

int my_set(rpg *);

ennemi_set_t ennemi_set(rpg *, ennemi_set_t, sfVector2f, char **);

list *initialisation(rpg *, char *, char *, sfVector2f);

list *insertion_pos(list *, int, rpg *, char *, char *, sfVector2f);

void fill_up_mini_set_t(rpg *);

void fill_up_inventory_set_t(rpg *);

void fill_up_setting_set_t(rpg *);

void fill_up_set_swipe(rpg *);

void handle_change_fight_hud(rpg *);

int handle_event_inventory(rpg *);

int my_inventory(rpg *);

void handle_features(rpg *);

void handle_display_features(rpg *);

void handle_ennemi_movement(rpg *);

void stats_to_file(rpg *, ennemi_set_t, char **, int);

void put_good_pos(rpg *);

void animation_ennemi_gauche(rpg *);

void animation_ennemi_droite(rpg *);

void animation_ennemi_haut(rpg *);

void animation_ennemi_bas(rpg *);

void detect_fight(rpg *);

void move_hud(rpg *, int, int);

void handle_final_choice(rpg *);

void animation_left(rpg *);

void animation_right(rpg *);

void button_difficult(rpg *);

void button_fps(rpg *);

void button_in_green_opt(rpg *);

int button_left(rpg *);

void display_set(rpg *);

void to_maj(char *);

void try(rpg *, char *);

void memymemou_set(rpg *, char *);

void handle_frame(rpg *);

void handle_resolution(rpg *);

int handle_set_event(rpg *);

void handle_sound_barre(rpg *);

void handle_swipe(rpg *);

void handle_using_key_biss(rpg *);

void handle_using_key_bis(rpg *);

void handle_mouvement_key(rpg *);

void handle_key_swipe(rpg *);

void handle_mouvement_key_bis(rpg *);

void handle_mouvement_key_biss(rpg *);

void handle_mouvement_key_bisss(rpg *);

void handle_key_text(rpg *);

void handle_volume(rpg *);

int transition_right(rpg *);

int transition_left(rpg *);

void fill_up_text_attaque_set_t(rpg *);

int my_space(rpg *);

int handle_space_event(rpg *);

void fill_up_pnj_set_t(rpg *);

void fill_up_pause_set_t(rpg *);

void achievement_and_sound(rpg *);

int animation_pause(rpg *, int x);

void change_boolean_achivement(rpg *);

void achievement_event_barre(rpg *);

void change_boolean_inventory(rpg *);

void inventory_event_barre(rpg *);

void change_boolean_quest(rpg *);

void quest_event_barre(rpg *);

void change_boolean_sound(rpg *);

void sound_event_barre(rpg *);

void change_boolean_touch(rpg *);

void touch_event_barre(rpg *);

void credit_event_barre(rpg *);

void green_barre_handle(rpg *);

void handle_boolean_sound(rpg *);

void handle_inside_to_on(rpg *);

void handle_inside_to_on_down(rpg *);

void handle_inside(rpg *);

void handle_inside_down(rpg *);

int my_pause(rpg *);

int handle_pause_event(rpg *);

void quest_and_inventory(rpg *);

int quit_button(rpg *);

void achievement_and_sound_red(rpg *);

void red_barre_handle(rpg *);

void quest_and_inventory_red(rpg *);

void touch_and_profil_red(rpg *);

void touch_and_profil(rpg *);

char **create_files_no_space(char *);

char **str_to_word_array_no_space(char const *);

int released_button_detect(rpg *use, button_set_t, sfVector2f, sfVector2f);

void pressed_button_detect(rpg *, button_set_t *, sfVector2f, sfVector2f);

void pos_button_detect(rpg *, button_set_t, sfVector2f, sfVector2f);

int my_change_attack(rpg *, attack_set_t);

int handle_event_change_attack(rpg *, attack_set_t);

void display_change_attack(rpg *);

int my_change_armor_helmet(rpg *, button_set_t);

int handle_event_change_armor_helmet(rpg *, button_set_t);

void check_my_msg(rpg *);

void pnj_rng(rpg *use);

int handle_event_pnj(rpg *);

int my_pnj(rpg *);

void handle_pnj(rpg *);

void handle_message_box(rpg *);

void fill_up_change_set_t(rpg *);

void fill_up_text_attaque_set_t(rpg *);

void fill_up_dog_set(rpg *);

void display_invetory(rpg *);

void handle_item(rpg *);

void detect_ennemi(rpg *);

int my_shop(rpg *);

int my_outro(rpg *);

int deadmenu(rpg *);

#endif /* !FUNCTION */