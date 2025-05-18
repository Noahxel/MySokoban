/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** to long for moulinette
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int b = my_strlen(str);
    int value = 0;

    for (int i = 0; i < (b + 1) / 2; i++) {
        value = str[i];
        str[i] = str[b - 1];
        str[b - 1] = value;
        b--;
    }
    return (str);
}
