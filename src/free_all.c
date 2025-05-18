/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** free_all
*/

#include "../include/sokoban_includes.h"

void free_all(sok_t *sok)
{
    free_arr(sok->global->arr_map);
    free(sok->global->str_map);
    for (int i = 0; i < sok->global->nb_boxes; i++)
        free(sok->holes_coos[i]);
    free(sok->temp);
    free(sok->global);
    free(sok->holes_coos);
    free(sok->perso);
    free(sok);
}
