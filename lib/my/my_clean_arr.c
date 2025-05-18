/*
** EPITECH PROJECT, 2022
** antman
** File description:
** my_rm_from_str
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

char **my_clean_arr(char **arr, char undesirable)
{
    for (int i = 0; arr[i]; i++) {
        arr[i] = my_clean_str(arr[i], undesirable);
    }
    return (arr);
}
