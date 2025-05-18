/*
** EPITECH PROJECT, 2021
** DevPack
** File description:
** main
*/

#include "../include/sokoban_includes.h"

int main(int argc, char **argv)
{
    int check = handle_error(argc, argv);

    if (check == 2)
        return (84);
    if (check == 1)
        return (0);
    return (sokoban(argv));
}
