

CC		=	gcc

NAME	=	minitel

SRC		=	minitel.c	\

OBJ		=	$(SRC:%.c=%.o)

RM		=	rm -f

all		:	$(NAME)

$(NAME)	:	$(OBJ) lib
			$(CC) -o $(NAME) $(SRC) -I./lib/src/my -L./lib -lmy

lib		:
			make -C ./lib

src		:
			$(CC) -o $(NAME) $(SRC) -I./lib/src/my -L./lib -lmy

clean	:
			$(RM) $(OBJ)
			make clean -C ./lib

fclean	:	clean
			$(RM) $(NAME)
			make fclean -C ./lib

re		:	fclean all lib

.PHONY	:	all src lib clean fclean re
