/*
** EPITECH PROJECT, 2021
** my_compute_square_root
** File description:
** no description or consequences
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    while (i * i != nb) {
        i++;
        if (i > nb)
            return (0);
    }
    return (i);
}
