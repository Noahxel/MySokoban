/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** resize_restart_gestion
*/

#include "../include/sokoban_includes.h"

void resize_gestion(sok_t *sok)
{
    char *error = "Window is too small";
    int error_size = my_strlen(error);

    while (COLS < sok->global->nb_cols || LINES < sok->global->nb_lines) {
        clear();
        mvwprintw(stdscr, LINES / 2, (COLS - error_size) / 2, error);
        refresh();
    }
}
