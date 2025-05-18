/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** This code will concatenate two strings
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

char *my_strcat(char *dest, char *src)
{
    int b = my_strlen(dest);
    int a = my_strlen(src);
    int totalen = b + a;
    char *final = malloc(sizeof(char) * (totalen + 1));

    final = my_strcpy(final, dest);
    for (int i = 0; b < totalen; i++) {
        final[b] = src[i];
        b++;
    }
    final[b] = '\0';
    return (final);
}
