/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** char_gestion
*/

#include "../include/sokoban_includes.h"

void move_da_box(sok_t *sok)
{
    int box_dest_x = PERSO_X + (2 * SOUS_X);
    int box_dest_y = PERSO_Y + (2 * SOUS_Y);

    sok->global->arr_map[box_dest_y][box_dest_x] = 'X';
}

void char_movement_checks(sok_t *sok)
{
    DEST_X = sok->perso->pos_x + SOUS_X;
    DEST_Y = sok->perso->pos_y + SOUS_Y;
    if (ARR_MAP[DEST_Y][DEST_X] == '#' ||
        ((ARR_MAP[DEST_Y][DEST_X] == 'X') &&
        ((ARR_MAP[DEST_Y + SOUS_Y][DEST_X + SOUS_X] == 'X' ||
        ARR_MAP[DEST_Y + SOUS_Y][DEST_X + SOUS_X] == '#'))))
        return;
    if (ARR_MAP[DEST_Y][DEST_X] == 'X' &&
        ((ARR_MAP[DEST_Y + SOUS_Y][DEST_X + SOUS_X] != 'X' ||
        ARR_MAP[DEST_Y + SOUS_Y][DEST_X + SOUS_X] != '#')))
        move_da_box(sok);
    my_replace_in_arr(ARR_MAP, 'P', ' ');
    PERSO_X = DEST_X;
    PERSO_Y = DEST_Y;
    ARR_MAP[PERSO_Y][PERSO_X] = 'P';
}

void char_movement_gestion(sok_t *sok, char key)
{
    DEST_X = 0;
    DEST_Y = 0;
    SOUS_X = 0;
    SOUS_Y = 0;
    if (key == 65)
        SOUS_Y = -1;
    if (key == 68)
        SOUS_X = -1;
    if (key == 66)
        SOUS_Y = 1;
    if (key == 67)
        SOUS_X = 1;
    if (key == ' ')
        game_reset(sok);
    char_movement_checks(sok);
}

void char_gestion(sok_t *sok)
{
    sok->global->key_event = getch();
    char_movement_gestion(sok, sok->global->key_event);
    clear();
}
