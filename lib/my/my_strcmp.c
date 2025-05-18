/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** to long 4 ze mouli
*/

int my_strcmp_ckeck(int cmts1, int cmts2)
{
    if (cmts1 < cmts2)
        return (-1);
    if (cmts1 > cmts2)
        return (1);
    if (cmts1 == cmts2)
        return (0);
}

int my_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    int cmts1 = 0;
    int cmts2 = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] == s2[i])
            i++;
        if (s1[i] < s2[i]) {
            cmts2 += (s2[i] - s1[i]);
            i++;
        }
        if (s1[i] > s2[i]) {
            cmts1 += (s1[i] - s2[i]);
            i++;
        }
    }
    my_strcmp_ckeck(cmts1, cmts2);
}
