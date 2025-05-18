/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** global_struct_setup
*/

#include "../include/sokoban_includes.h"

original_t *set_original_values_struct(sok_t *sok)
{
    original_t *original = malloc(sizeof(original_t));

    original->original_str_map = sok->global->str_map;
    return (original);
}

global_t *global_struct_setup(sok_t *sok, char **argv)
{
    global_t *global = malloc(sizeof(global_t));

    global->argv = argv;
    global->key_event = 0;
    global->str_map = extract_str(argv[1]);
    global->arr_map = my_str_to_word_array(global->str_map, '\n');
    global->nb_cols = my_strlen(global->arr_map[0]);
    global->nb_lines = my_arraylen(global->arr_map);
    global->map_x = (COLS / 2) - (global->nb_cols / 2);
    global->map_y = (LINES / 2) - (global->nb_lines / 2);
    global->nb_boxes = 0;
    global->valided_boxes = 0;
    global->endgame = -1;
    for (int i = 0; i < my_strlen(global->str_map); i++)
        if (global->str_map[i] == 'X')
            global->nb_boxes++;
    return (global);
}

perso_t *perso_struct_setup(sok_t *sok)
{
    perso_t *perso = malloc(sizeof(perso_t));

    perso->original_y = 0;
    perso->original_x = 0;
    perso->pos_y = 0;
    perso->pos_x = 0;
    for (int i = 0; i < my_strlen(sok->global->str_map); i++) {
        if (sok->global->str_map[i] == 'P')
            break;
        if (sok->global->str_map[i] == '\n') {
            perso->original_y++;
            perso->original_x = 0;
            continue;
        }
        perso->original_x++;
    }
    perso->pos_x = perso->original_x;
    perso->pos_y = perso->original_y;
    return (perso);
}

sok_t *struct_setup(char **argv)
{
    sok_t *sok = malloc(sizeof(sok_t));

    sok->global = global_struct_setup(sok, argv);
    sok->perso = perso_struct_setup(sok);
    sok->temp = temp_struct_setup(sok);
    sok->holes_coos = set_holes_coos_struct(sok);
    sok->original_things = set_original_values_struct(sok);
    return (sok);
}
