##
## EPITECH PROJECT, 2021
## rpg
## File description:
## Makefile
##

SRC =		$(wildcard *.c) 									\
			$(wildcard src/*.c)									\
			$(wildcard src/fill_up/*.c)							\
			$(wildcard src/menu/*.c)							\
			$(wildcard src/fill_up/set/*.c)						\
			$(wildcard src/menu/intro/*.c)						\
			$(wildcard src/menu/choice/*.c)						\
			$(wildcard src/menu/name/*.c)						\
			$(wildcard src/menu/set/*.c)						\
			$(wildcard src/menu/launch/*.c)						\
			$(wildcard src/loading/*.c)							\
			$(wildcard src/game/level/*.c)						\
			$(wildcard src/game/level/pnj/*.c)						\
			$(wildcard src/game/*.c)							\
			$(wildcard src/game/fight/*.c)						\
			$(wildcard src/game/inventory/*.c)					\
			$(wildcard src/game/inventory/change_attack/*.c)	\
			$(wildcard src/game/inventory/change_armure/*.c)	\
			$(wildcard src/game/pause/*.c)						\
			$(wildcard src/game/shop/*.c)						\
			$(wildcard src/game/space/*.c)						\
			$(wildcard src/game/outro/*.c)

OBJ		=	$(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS	=	-I./include/ -g

LDFLAGS	=	-l csfml-audio -l csfml-graphics -l csfml-system -l csfml-window

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		$(RM) *~
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.Phony: all clean fclean re