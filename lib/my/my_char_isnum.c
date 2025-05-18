/*
** EPITECH PROJECT, 2021
** my_char_isnum
** File description:
** check if the character is a number
*/

int my_char_isnum(char a)
{
    if (a > 57 || a < 48)
        return (1);
    else
        return (0);
}
