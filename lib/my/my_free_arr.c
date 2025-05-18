/*
** EPITECH PROJECT, 2022
** minishell1
** File description:
** arr_free
*/

#include <stdlib.h>

void free_arr(char **arr)
{
    for (int i = 0; arr[i]; i++) {
        free(arr[i]);
    }
}
