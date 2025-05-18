/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** game_reset
*/

#include "../include/sokoban_includes.h"

void game_reset(sok_t *sok)
{
    clear();
    sok->global->endgame = -1;
    free_arr(sok->global->arr_map);
    sok->global->arr_map =
        my_str_to_word_array(sok->original_things->original_str_map, '\n');
    sok->perso->pos_x = sok->perso->original_x;
    sok->perso->pos_y = sok->perso->original_y;
}
