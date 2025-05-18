/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** structs_setup2
*/

#include "../include/sokoban_includes.h"

temp_t *temp_struct_setup(sok_t *sok)
{
    temp_t *temp = malloc(sizeof(temp_t));

    temp->dest_x = 0;
    temp->dest_y = 0;
    temp->sous_x = 0;
    temp->sous_y = 0;
    return (temp);
}

holes_coos_t **fill_holes_coos_struct(sok_t *sok, holes_coos_t **holes_coos)
{
    int x = 0;
    int y = 0;
    int holes_count = 0;

    for (int i = 0; i < my_strlen(sok->global->str_map); i++) {
        if (sok->global->str_map[i] == '\n') {
            y++;
            x = 0;
            continue;
        }
        if (sok->global->str_map[i] == 'O') {
            holes_coos[holes_count]->x = x;
            holes_coos[holes_count]->y = y;
            holes_count++;
        }
        x++;
    }
    return (holes_coos);
}

holes_coos_t **malloc_holes_coos_struct(sok_t *sok, holes_coos_t **holes_coos)
{
    int holes_total = 0;

    for (int i = 0; i < my_strlen(sok->global->str_map); i++)
        if (sok->global->str_map[i] == 'O')
            holes_total++;
    holes_coos = malloc(sizeof(holes_coos_t *) * holes_total);
    for (int i = 0; i < holes_total; i++)
        holes_coos[i] = malloc(sizeof(holes_coos_t));
    return (holes_coos);
}

holes_coos_t **set_holes_coos_struct(sok_t *sok)
{
    holes_coos_t **holes_coos = NULL;

    holes_coos = malloc_holes_coos_struct(sok, holes_coos);
    holes_coos = fill_holes_coos_struct(sok, holes_coos);
    return (holes_coos);
}
