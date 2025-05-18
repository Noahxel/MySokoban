/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** handle_errors
*/

#include "../include/sokoban_includes.h"

void my_helper(void)
{
    my_printf("USAGE\n");
    my_printf("     ./my_sokoban map\n");
    my_printf("DESCRIPTION\n");
    my_printf("     map  file representing the warehouse map,");
    my_printf(" containing '#' for walls,\n");
    my_printf("          'P' for the player, 'X' for boxes and ");
    my_printf("'O' for storage locations.\n");
}

int handle_error3(char **argv)
{
    char *map = extract_str(argv[1]);
    int check_p = 0;
    int check_o = 0;
    int check_x = 0;

    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == 'P')
            check_p++;
        if (map[i] == 'O')
            check_o++;
        if (map[i] == 'X')
            check_x++;
    }
    if (check_p == 0 || check_o != check_x) {
        write(2, "P invalid map\n", 14);
        return (2);
    }
    return (0);
}

int handle_error2(char **argv)
{
    struct stat len;
    int fd = open(argv[1], O_RDONLY);
    char buf[1];

    stat(argv[1], &len);
    if (fd == -1) {
        write(2, "Unable to open file\n", 20);
        close (fd);
        return (2);
    }
    if (len.st_size <= 0) {
        write(2, "File is empty\n", 14);
        close (fd);
        return (2);
    }
    if (read(open(argv[1], O_RDONLY), buf, 1) == -1)
        write(2, "Unable to read the file\n", 24);
    return (handle_error3(argv));
}

int handle_error(int argc, char **argv)
{
    if (argc != 2) {
        my_printf("%s\n", "./my_sokoban -h (for help ^^)");
        return (2);
    }
    if (my_strcmp(argv[1], "-h") == 0) {
        my_helper();
        return (1);
    }
    return (handle_error2(argv));
}
