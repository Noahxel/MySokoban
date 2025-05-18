/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** read_file
*/

#include "../include/sokoban_includes.h"

int fs_open_file(char const *filepath)
{
    int fd = 0;

    fd = open(filepath, O_RDONLY);
    if (fd >= 0)
        return (fd);
    else if (fd == -1)
        return (-1);
    else
        return (84);
}

char *read_file(char const *filepath, int fd)
{
    struct stat len;
    char *buffer;

    stat(filepath, &len);
    buffer = malloc((len.st_size + 1) * sizeof(char));
    buffer[len.st_size] = '\0';
    read(fd, buffer, len.st_size);
    return (buffer);
}

char *extract_str(char const *filepath)
{
    int fd = fs_open_file(filepath);

    if (fd == 84)
        return NULL;
    return (read_file(filepath, fd));
}
