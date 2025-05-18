/*
** EPITECH PROJECT, 2022
** antman
** File description:
** my_rm_from_str
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

char *my_replace_in_str(char *str, char undesirable, char new)
{
    for (int i = 0; i <= my_strlen(str); i++)
        if (str[i] == undesirable)
            str[i] = new;
    return (str);
}
