/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_arraylen
*/

#include "my.h"
#include <stdio.h>

int my_arraylen(char **arr)
{
    int i = 1;

    for (; arr[i]; i++);
    return (i);
}
