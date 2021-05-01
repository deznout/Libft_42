
RELATIVE = .
OBJ_PATH = .
SRC_NAME =	$(wildcard *.c)

BONUS	 =  ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS		=	$(BONUS:.c=.o)

OBJ_NAME = $(SRC_NAME:.c=.o)
SRC = $(SRC_NAME)
OBJ = $(addprefix ,$(OBJ_NAME))
CC = gcc
CFLAGS = -Wall -Werror -Wextra
INC = .
LIBFT_PATH = .
CPPFLAGS = -I$(INC)
NAME = $(LIBFT_PATH)/libft.a

.PHONY: clean fclean all re

all : $(NAME)


$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ_PATH)/%.o: $(SRC_PATH)%.c $(INC)/libft.h
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

bonus:	$(OBJS) $(BONUS_OBJS)
		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJ) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)  $(bonus)

re : fclean all