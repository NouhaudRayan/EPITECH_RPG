/*
** EPITECH PROJECT, 2021
** colors
** File description:
** sous fonction
*/

#include "function.h"

sfColor colors(int x, int y, int z)
{
    sfColor color = sfColor_fromRGB(x, y, z);
    return (color);
}