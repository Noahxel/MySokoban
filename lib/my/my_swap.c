/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** This code will swap the values of two variables
*/

void my_swap(int *a, int *b)
{
    int value = *b;

    *b = *a;
    *a = value;
}
