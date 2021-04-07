AR		=	ar

NAME	=	libmy.a

SRC		=	./src/processus.c \
			
OBJ		=	$(SRC:%.c=%.o)

RM		=	rm -f

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			$(AR) -rc $(NAME) $(OBJ)

clean	:
			$(RM) $(OBJ)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re