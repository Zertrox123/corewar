##
## EPITECH PROJECT, 2024
## omar
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/my_strcmp.c	\
		src/my_strlen.c	\
		src/my_atoi.c	\
		src/my_itoa.c	\
		src/instruction/live.c	\

OBJ = $(SRC:.c=.o)

CFLAGS = -g3

NAME = corewar

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

all: $(NAME)

tests_run:
	gcc -o unit_tests $(SRC) $(TST) --coverage -lcriterion
	./unit_tests

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *.gcno
	rm -f *.gcda
	rm -f unit_tests

re: fclean all
