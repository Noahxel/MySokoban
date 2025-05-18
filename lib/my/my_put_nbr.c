/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** return numbers
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int my_put_nbr(int nb)
{
    if (nb >= 0 && nb < 10)
        my_putchar(nb + '0');
    else if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * (-1));
    } else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (nb);
}
