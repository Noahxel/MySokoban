/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** contatenates the n-first characters of two inputed strings
*/

int my_strlen(char const *str);

char *my_strncat(char *dest , char const *src , int nb)
{
    int nbdest = my_strlen(dest);
    int cmt = 0;

    while (src[cmt] != '\0' && nb != 0) {
        dest[nbdest] = src[cmt];
        cmt++;
        nbdest++;
        nb--;
    }
    dest[nbdest] = '\0';
    return (dest);
}
