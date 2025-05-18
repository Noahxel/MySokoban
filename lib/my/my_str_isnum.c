/*
** EPITECH PROJECT, 2021
** my_str_isnum
** File description:
** ...
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 57 || str[i] < 48)
            return (0);
        i++;
    }
    return (1);
}
