/*
** EPITECH PROJECT, 2021
** my_str_isalpha
** File description:
** check if the char is a letter
*/

int my_char_isalpha(char a)
{
    if ((a > 'Z' || a < 'A') && (a > 'z') || (a < 'a'))
        return (1);
    else
        return (0);
}
