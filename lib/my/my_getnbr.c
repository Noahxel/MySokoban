/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** transform a char in int
*/

#include "my.h"

int pos_or_neg(int cmt)
{
    if (cmt % 2 == 0)
        return (1);
    else
        return (0);
}

int my_getnbr2(int i, char const *str, int cmt)
{
    int total = 0;

    while (my_char_isnum(str[i]) == 1) {
        total = (total * 10) + str[i] - '0';
        i++;
    }
    if (pos_or_neg(cmt) == 1)
        return (total);
    else {
        total = -total;
        return (total);
    }
}

int my_getnbr(char const *str)
{
    int i = 0;
    int cmt = 0;

    while (my_char_isnum(str[i]) == 0) {
        if (str[i] == '-') {
            cmt++;
            i++;
        }
        if (str[i] == '+')
            i++;
        if ((str[i] != '-' && str[i] != '+') && my_char_isnum(str[i]) == 0) {
            cmt = 0;
            i++;
        }
    }
    return (my_getnbr2(i, str, cmt));
}
