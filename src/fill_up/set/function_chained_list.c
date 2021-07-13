/*
** EPITECH PROJECT, 2021
** final
** File description:
** function_chained_list
*/

#include "function.h"

list *initialisation(rpg *use, char *path, char *text, sfVector2f pos)
{
    list *ennemi = malloc(sizeof(list));

    if (ennemi == NULL)
        return NULL;
    ennemi->set = create_files(text);
    ennemi->path = create_files(path);
    ennemi->ennemi = ennemi_set(use, ennemi->ennemi, pos, \
    create_files(text));
    return(ennemi);
}

list *insertion_pos(list *ennemi, int posi, rpg *use, \
char *path, char *text, sfVector2f pos)
{
    list *new = malloc(sizeof(*new));
    list *prec = ennemi;
    list *cur = ennemi;

    if (ennemi == NULL)
        return (NULL);
    if (new != NULL) {
        new->set = create_files(text);
        new->path = create_files(path);
        new->ennemi = ennemi_set(use, new->ennemi, pos, create_files(text));
        new->next = NULL;
    }
    new->set = create_files(text);
    new->path = create_files(path);
    new->ennemi = ennemi_set(use, new->ennemi, pos, create_files(text));
    new->next = cur;
    return(new);
}