/*
** EPITECH PROJECT, 2021
** fi
** File description:
** fill_up_file_set_t
*/

#include "function.h"

void fill_up_file_set_t(rpg *use)
{
    use->files.player = create_files("save/player.txt");
    use->files.attack = create_files("save/attack.txt");
    use->files.fight = create_files("save/fight.txt");
    use->files.touch = create_files("save/touch.txt");
    use->files.png_history = create_files_no_space("save/history_png.txt");
    use->files.png_secondary = create_files_no_space("save/secondary_png.txt");
    use->files.png_useless = create_files_no_space("save/useless_png.txt");
    use->files.ennemi_pos = create_files("save/ennemi_position.txt");
    use->files.item_helmet = create_files("save/item_helmet.txt");
    use->files.item_attack = create_files("save/item_attack.txt");
    use->files.item_chesplate = create_files("save/item_chestplate.txt");
    use->files.pos_chest = create_files("save/pos_chest.txt");
}