/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** c rien c la mouli
*/

char *my_strncpy(char *dest , char const *src , int n)
{
    int i = 0;

    while (i != n) {
        dest[i] = src[i];
        i = i + 1;
    }
    if (i == n)
        return (dest);
}
