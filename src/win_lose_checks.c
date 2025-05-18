/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** win_lose_gestion
*/

#include "../include/sokoban_includes.h"

int check_colisions(sok_t *sok, int y, int x)
{
    if (ARR_MAP[y][x] == 'X') {
        if ((((ARR_MAP[y + 1][x] == '#') || (ARR_MAP[y + 1][x] == 'X')) &&
            ((ARR_MAP[y][x + 1] == '#') || (ARR_MAP[y][x + 1] == 'X'))) ||
            (((ARR_MAP[y][x + 1] == '#') || (ARR_MAP[y][x + 1] == 'X')) &&
            ((ARR_MAP[y - 1][x] == '#') || (ARR_MAP[y - 1][x] == 'X'))) ||
            (((ARR_MAP[y - 1][x] == '#') || (ARR_MAP[y - 1][x] == 'X')) &&
            ((ARR_MAP[y][x - 1] == '#') || (ARR_MAP[y][x - 1] == 'X'))) ||
            (((ARR_MAP[y][x - 1] == '#') || (ARR_MAP[y][x - 1] == 'X')) &&
            ((ARR_MAP[y + 1][x] == '#') || (ARR_MAP[y + 1][x] == 'X')))) {
            return (1);
        }
    }
    return (0);
}

void check_lose(sok_t *sok)
{
    int check = 0;

    for (int y = 0; ARR_MAP[y]; y++) {
        for (int x = 0; ARR_MAP[y][x] != '\0'; x++)
            check += check_colisions(sok, y, x);
    }
    if (check == sok->global->nb_boxes)
        sok->global->endgame = 1;
}

void check_win(sok_t *sok)
{
    for (int i = 0; i < sok->global->nb_boxes; i++) {
        if ((ARR_MAP[sok->holes_coos[i]->y]
            [sok->holes_coos[i]->x] != 'X' &&
            ARR_MAP[sok->holes_coos[i]->y]
            [sok->holes_coos[i]->x] != 'P'))
            ARR_MAP[sok->holes_coos[i]->y][sok->holes_coos[i]->x] = 'O';
    }
    for (int i = 0; i < sok->global->nb_boxes; i++) {
        if (ARR_MAP[sok->holes_coos[i]->y]
            [sok->holes_coos[i]->x] == 'X') {
            continue;
        }
        return;
    }
    sok->global->endgame = 0;
}
