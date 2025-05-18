/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** to long 4 mouli
*/

#include "my.h"

int my_strncmp(const char *s1, const char *s2, int n)
{
    int i = 0;

    for (int i = 0; i <= n; i++) {
        if (s1[i] != s2[i])
            return (1);
    }
    return (0);
}
