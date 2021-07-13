/*
** EPITECH PROJECT, 2021
** game
** File description:
** create_files
*/

#include "function.h"

char **create_files(char *path)
{
    return (str_to_word_array(file_to_str(path)));
}

char **create_files_no_space(char *path)
{
    return (str_to_word_array_no_space(file_to_str(path)));
}