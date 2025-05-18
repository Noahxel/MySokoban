##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## d10
##

SRC	=	my_char_isnum.c	\
		my_compute_power_rec.c	\
		my_compute_square_root.c	\
		my_getnbr.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_str_isalpha.c	\
		my_str_isnum.c	\
		my_strlen.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_swap.c	\
		my_printf.c	\
		my_converts.c	\
		my_char_isalpha.c	\
		my_str_to_word_array.c	\
		my_put_word_arr.c	\
		my_nbr_len.c	\
		my_clean_str.c	\
		my_free_arr.c	\
		my_arraylen.c	\
		my_str_is_alphanumeric.c	\
		my_rm_from_array.c	\
		my_clean_arr.c	\
		my_putstr_as_nbr.c	\
		my_put_word_arr_as_nbr.c	\
		my_replace_in_arr.c	\
		my_replace_in_str.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mkdir -p ../../include/
	cp my.h ../../include/

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f libmy.a

re:	fclean all
