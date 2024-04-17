##
## EPITECH PROJECT, 2024
## Workshop_Unit_Tests
## File description:
## Makefile
##

NAME	=	my_str_to_word_array

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-W -Wall -Wextra -Werror -I./includes

SRC_MAIN	=	src/src_main/main.c

TESTNAME	=	unit_tests

TESTCFLAGS	=	-I./includes -Wall -Wextra -lcriterion --coverage

SRC	=	$(shell find src/ -name '*.c' -not -name 'main.c')

SRC2	=	$(shell find tests/ -name '*.c')

OBJ	=	$(SRC:.c=.o)

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) $(OBJ_MAIN)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(CFLAGS)

clean:
	$(RM) $(OBJ) $(OBJ_MAIN)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

tests_run:
	gcc -o $(TESTNAME) $(SRC2) $(SRC) $(TESTCFLAGS)
	./$(TESTNAME) --verbose
	gcovr -e tests/ -b

tests_clean:
	rm *.gcda
	rm *.gcno
	rm -f $(OBJ)

tests_fclean: tests_clean
	rm $(TESTNAME)

tests_re: tests_clean tests_run

.PHONY:	all clean fclean re tests_run tests_clean tests_fclean
