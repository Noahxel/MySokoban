/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** sokoban_structs
*/

#include <stdbool.h>

#ifndef SOKOBAN_STRUCTS_H_
    #define SOKOBAN_STRUCTS_H_
    #define SOUS_X sok->temp->sous_x
    #define SOUS_Y sok->temp->sous_y
    #define DEST_X sok->temp->dest_x
    #define DEST_Y sok->temp->dest_y
    #define PERSO_X sok->perso->pos_x
    #define PERSO_Y sok->perso->pos_y
    #define ARR_MAP sok->global->arr_map

typedef struct original_s {
    char *original_str_map;
} original_t;

typedef struct temp_s {
    int sous_x;
    int sous_y;
    int dest_x;
    int dest_y;
} temp_t;

typedef struct holes_coos_s {
    int x;
    int y;
} holes_coos_t;

typedef struct perso_s {
    int original_x;
    int original_y;
    int pos_x;
    int pos_y;
} perso_t;

typedef struct global_s {
    int key_event;
    char *str_map;
    char **arr_map;
    char **argv;
    int nb_lines;
    int nb_cols;
    int map_x;
    int map_y;
    int nb_boxes;
    int valided_boxes;
    int endgame;
} global_t;

typedef struct sok_s {
    global_t *global;
    perso_t *perso;
    temp_t *temp;
    holes_coos_t **holes_coos;
    original_t *original_things;
} sok_t;

#endif
