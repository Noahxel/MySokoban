/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** sokoban_functions
*/

#include "sokoban_structs.h"

#ifndef SOKOBAN_FUNCTIONS_H_
    #define SOKOBAN_FUNCTIONS_H_

int sokoban(char **argv);

void char_gestion(sok_t *sok);

sok_t *struct_setup(char **argv);

char *extract_str(char const *filepath);

temp_t *temp_struct_setup(sok_t *sok);

holes_coos_t **set_holes_coos_struct(sok_t *sok);

void check_endgame(sok_t *sok);

void map_gestion(sok_t *sok);

void engame_gestion(sok_t *sok);

void free_all(sok_t *sok);

void game_reset(sok_t *sok);

void check_win(sok_t *sok);

void check_lose(sok_t *sok);

int handle_error(int argc, char **argv);

void resize_gestion(sok_t *sok);

void map_display(sok_t *sok);

#endif
