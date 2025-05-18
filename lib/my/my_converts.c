/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_convert and print
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

void my_convert_tobin(int nb)
{
    char *result;
    int cpynb = nb, lenb = 0, i = 0;

    for (; cpynb >= 1; lenb++)
        cpynb /= 10;
    result = malloc(sizeof(char) * (3 * lenb));
    for (; nb > 0; i++) {
        result[i] = (nb % 2) + '0';
        nb = (int) (nb / 2);
    }
    my_revstr(result);
    my_putstr(result);
}

void my_convert_tooct(int nb)
{
    char *result;
    int cpynb = nb, lenb = 0, i = 0;

    for (; cpynb >= 1; lenb++)
        cpynb /= 10;
    result = malloc(sizeof(char) * (3 * lenb));
    for (; nb > 0; i++) {
        result[i] = (nb % 8) + '0';
        nb = (int) (nb / 8);
    }
    my_revstr(result);
    my_putstr(result);
}

void my_convert_to_hex(int nb)
{
    char *result;
    int cpynb = nb, lenb = 0, i = 0, modres = 0;

    for (; cpynb >= 1; lenb++)
        cpynb /= 10;
    result = malloc(sizeof(char) * (3 * lenb));
    for (; nb > 1; i++) {
        modres = (nb % 16);
        if (modres > 9) {
            modres += 87;
            result[i] = (char) modres;
        } else
            result[i] = modres + '0';
        nb = (nb / 16);
    }
    my_revstr(result);
    my_putstr(result);
}

void my_convert_to_capital_hex(unsigned int nb)
{
    char *result;
    unsigned int cpynb = nb, modres = 0;
    int lenb = 0, i = 0;

    for (; cpynb >= 1; lenb++)
        cpynb /= 10;
    result = malloc(sizeof(char) * (3 * lenb));
    for (; nb > 1; i++) {
        modres = (nb % 16);
        if (modres > 9) {
            modres += 55;
            result[i] = (char) modres;
        } else
            result[i] = modres + '0';
        nb = (nb / 16);
    }
    my_revstr(result);
    my_putstr(result);
}

int my_put_unsigned_nbr(unsigned int nb)
{
    if (nb < 10)
        my_putchar(nb + '0');
    else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (nb);
}
