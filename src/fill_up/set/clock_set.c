/*
** EPITECH PROJECT, 2021
** clock set
** File description:
** clock_set
*/

#include "function.h"

clock_set_t clock_set(clock_set_t clock)
{
    clock.clock = sfClock_create();
    return (clock);
}