/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** sokoman
*/

#include "../include/sokoban_includes.h"

void sok_instruction(sok_t *sok)
{
    map_gestion(sok);
    char_gestion(sok);
    resize_gestion(sok);
    check_lose(sok);
    check_win(sok);
}

int sokoban(char **argv)
{
    int rtrn_value = 0;
    sok_t *sok = NULL;

    initscr();
    noecho();
    sok = struct_setup(argv);
    while (sok->global->key_event != '\n') {
        if (sok->global->endgame < 0)
            sok_instruction(sok);
        if (sok->global->endgame >= 0) {
            rtrn_value = sok->global->endgame;
            map_display(sok);
            free_all(sok);
            endwin();
            return (rtrn_value);
        }
    }
}
