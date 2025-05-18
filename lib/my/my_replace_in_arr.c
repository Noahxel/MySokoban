/*
** EPITECH PROJECT, 2022
** antman
** File description:
** my_rm_from_str
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

char **my_replace_in_arr(char **arr, char undesirable, char new)
{
    for (int i = 0; arr[i]; i++) {
        arr[i] = my_replace_in_str(arr[i], undesirable, new);
    }
    return (arr);
}
