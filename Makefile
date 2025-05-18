##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile main.c and u.t
##

SRCTEST		=		test/test_project.c

SRC		=		src/main.c	\
				src/structs_setup.c	\
				src/char_gestion.c	\
				src/sokoban.c	\
				src/extract_file_str.c	\
				src/map_gestion.c	\
				src/structs_setup2.c	\
				src/free_all.c	\
				src/game_reset.c	\
				src/win_lose_checks.c	\
				src/resize_gestion.c	\
				src/handle_errors.c	\

TEST		=		unit_tests

NAME		=		my_sokoban

OBJ		=		$(SRC:.c=.o)

LDFLAGS		=		-Llib/my -lmy
CFLAGS		=		-Wall -Wextra -g3
TFLAGS		=		--coverage -lcriterion
NCFLAGS		=		-lncurses

all:	$(NAME)

$(NAME):		$(OBJ)
		make re -C lib/my/
		gcc $(CFLAGS) $(OBJ) -o $(NAME) $(NCFLAGS) $(LDFLAGS)

tests_run:
		gcc $(CFLAGS) $(SRCTEST) $(SRC) -o $(TEST) $(LDFLAGS) $(TFLAGS)
		./unit_tests
clean:
		rm -f *.o
		rm -f src/*.o
		rm -f $(NAME)
		make clean -C lib/my/

fclean: clean
		make fclean -C lib/my/
		rm -f *.gcno
		rm -f *.gcda
		rm -f $(TEST)

re: fclean all
