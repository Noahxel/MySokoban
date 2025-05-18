/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** map_gestion
*/

#include "../include/sokoban_includes.h"

void map_display(sok_t *sok)
{
    int x = (COLS / 2) - (sok->global->nb_cols / 2);
    int y = (LINES / 2) - (sok->global->nb_lines / 2);

    for (int i = 0; sok->global->arr_map[i]; i++) {
        mvprintw(y, x, sok->global->arr_map[i]);
        y++;
    }
}

void map_gestion(sok_t *sok)
{
    map_display(sok);
}
