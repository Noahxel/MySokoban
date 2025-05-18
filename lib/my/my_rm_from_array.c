/*
** EPITECH PROJECT, 2022
** antman
** File description:
** my_rm_from_str
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>

char **my_rm_from_array(char **arr, int str_ID)
{
    int arr_len = my_arraylen(arr);
    char **final_arr;
    int j = 0;

    final_arr = malloc(sizeof(unsigned char) * (arr_len));
    for (int i = 0; arr[i]; i++) {
        if (i == str_ID)
            i++;
        final_arr[j] = arr[i];
        j++;
    }
    final_arr[arr_len - 1] = NULL;
    return (final_arr);
}
