/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** This code will display one by one every characters of an inputed word
*/

#include <unistd.h>
#include "my.h"

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
