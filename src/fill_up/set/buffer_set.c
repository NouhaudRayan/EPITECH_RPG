/*
** EPITECH PROJECT, 2021
** buffer set
** File description:
** buffer_set
*/

#include "function.h"

sfVideoMode buffer_set(sfVideoMode buffer)
{
    buffer.width = 1920;
    buffer.height = 1080;
    buffer.bitsPerPixel = 32;
    return (buffer);
}