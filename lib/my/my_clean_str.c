/*
** EPITECH PROJECT, 2022
** antman
** File description:
** my_rm_from_str
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

char *my_clean_str(char *str, char undesirable)
{
    char *final_str = "";
    int final_len = my_strlen(str);
    int j = 0;

    for (int i = 0; i <= my_strlen(str); i++)
        if (undesirable == str[i])
            final_len--;
    final_str = malloc(sizeof(char) * (final_len + 1));
    for (int i = 0; i <= my_strlen(str); i++) {
        if (str[i] == undesirable)
            continue;
        final_str[j] = str[i];
        j++;
    }
    final_str[j - 1] = '\0';
    return (final_str);
}
