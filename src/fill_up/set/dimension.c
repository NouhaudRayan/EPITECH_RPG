/*
** EPITECH PROJECT, 2021
** dimensions
** File description:
** dimension
*/

#include "function.h"

sfIntRect dimension(int left, int top, int width, int height)
{
    sfIntRect rect;

    rect.left = left;
    rect.top = top;
    rect.width = width;
    rect.height = height;
    return (rect);
}