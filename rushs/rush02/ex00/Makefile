NAME=	rush-02

FLAG= -Wall -Wextra -Werror

SRC=	libft.c \
			main.c \

OBJ= $(SRC:.c=.o)

$(NAME):	$(OBJ)
					@gcc $(FLAG) $(OBJ) -o $(NAME)

all:			$(NAME)

clean:
					@rm -f $(OBJ)

fclean:		clean
					@rm -rf $(NAME)

re:				fclean all

.PHONY:		all, clean, fclean, re