/*
** EPITECH PROJECT, 2022
** minishell1
** File description:
** my_put_list_nbr
*/

#include "my.h"

void my_putstr_as_nbr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_put_nbr(str[i]);
        i++;
    }
}
