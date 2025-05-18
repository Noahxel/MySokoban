/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** this code will contain all my function prototypes
*/

#ifndef MY_H_
    #define MY_H_

char *my_replace_in_str(char *str, char undesirable, char new);

char **my_replace_in_arr(char **arr, char undesirable, char new);

void my_putstr_as_nbr(char *str);

void my_put_word_arr_as_nbr(char **arr);

char **my_clean_arr(char **arr, char undesirable);

void my_put_error_message(char *str);

char **my_rm_from_array(char **arr, int str_ID);

int my_char_isalpha(char a);

int my_str_is_alphanumeric(char *str);

int my_arraylen(char **arr);

void free_arr(char **arr);

char *my_clean_str(char *str, char undesirable);

int my_nbr_len(int nbr);

void my_put_word_arr(char **arr);

char **my_str_to_word_array(char *str, char delimiter);

int my_str_is_last(char *str);

void my_printf(char *s, ...);

int my_put_unsigned_nbr(unsigned int nb);

void my_convert_to_capital_hex(unsigned int nb);

void my_convert_to_hex(int nb);

void my_convert_tooct(int nb);

void my_convert_tobin(int nb);

int my_char_isnum(char a);

void my_putchar(char c);

int my_isneg(int nb);

int my_strcmp(char const *s1, char const *s2);

int my_put_nbr(int nb);

int my_strncmp(char const *s1, char const *s2, int n);

void my_swap(int *a, int *b);

char *my_strupcase(char *str);

void my_putstr(char const *str);

char *my_strlowcase(char *str);

int my_strlen(char const *str);

char *my_strcapitalize(char *str);

int my_getnbr(char const *str);

int my_str_isalpha(char const *str);

void my_sort_int_array(int *tab, int size);

int my_str_isnum(char const *str);

int my_compute_power_rec(int nb, int power);

int my_str_islower(char const *str);

int my_compute_square_root(int nb);

int my_str_isupper(char const *str);

int my_is_prime(int nb);

int my_str_isprintable(char const *str);

int my_find_prime_sup(int nb);

int my_showstr(char const *str);

char *my_strcpy(char *dest, char const *src);

int my_showmem(char const *str, int size);

char *my_strncpy(char *dest, char const *src, int n);

char *my_strcat(char *dest, char *src);

char *my_revstr(char *str);

char *my_strncat(char *dest, char const *src, int nb);

#endif
