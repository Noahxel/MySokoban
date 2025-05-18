/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** plagia printf
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

void my_args(va_list arg, char *s, ...)
{
    if (s[0] == '%')
        my_putchar('%');
    if (s[0] == 's')
        my_putstr(va_arg(arg, char *));
    if (s[0] == 'c')
        my_putchar(va_arg(arg, int));
    if ((s[0] == 'd') || (s[0] == 'i'))
        my_put_nbr(va_arg(arg, int));
    if (s[0] == 'b')
        my_convert_tobin(va_arg(arg, int));
    if (s[0] == 'o')
        my_convert_tooct(va_arg(arg, int));
    if (s[0] == 'x')
        my_convert_to_hex(va_arg(arg, int));
    if (s[0] == 'u')
        my_put_unsigned_nbr(va_arg(arg, unsigned int));
    if (s[0] == 'X')
        my_convert_to_capital_hex(va_arg(arg, unsigned int));
}

void my_printf(char *s, ...)
{
    va_list arg;
    va_start(arg, s);
    for (; s[0] != '\0'; *s++) {
        if (s[0] != '%')
            my_putchar(s[0]);
        else {
            *s++;
            my_args(arg, s);
        }
    }
}
