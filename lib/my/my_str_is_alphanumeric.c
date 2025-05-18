/*
** EPITECH PROJECT, 2022
** minishell1
** File description:
** my_str_is_alphanumeric
*/

#include "my.h"

int my_str_is_alphanumeric(char *str)
{
    for (int i = 0; i < my_strlen(str); i++) {
        if ((my_char_isnum(str[i]) == 1) && (my_char_isalpha(str[i]) == 1))
            return (1);
    }
    return (0);
}
