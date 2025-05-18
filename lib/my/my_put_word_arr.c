/*
** EPITECH PROJECT, 2022
** minishell1
** File description:
** my_print_env
*/

#include "my.h"
#include <stddef.h>

void my_put_word_arr(char **arr)
{
    for (int i = 0; arr[i]; i++) {
        my_putstr(arr[i]);
        my_putchar('\n');
    }
}
