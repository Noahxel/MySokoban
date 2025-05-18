/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** This code will return the number of characters in an inputed string
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}
