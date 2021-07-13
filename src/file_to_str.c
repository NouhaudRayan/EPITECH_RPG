/*
** EPITECH PROJECT, 2021
** game
** File description:
** file_to_str
*/

#include "function.h"

size_t sizefile(char const *filepath)
{
    struct stat st;

    if (stat(filepath, &st) != 0)
        return (0);
    return (st.st_size);
}

char *file_to_str(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *str = malloc(sizefile(filepath) + 1);

    read(fd, str, sizefile(filepath));
    str[sizefile(filepath)] = '\0';
    close(fd);
    return (str);
}