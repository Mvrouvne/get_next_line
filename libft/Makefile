NAME = libft.a
CC = gcc
AR = ar
ARFLAGS = rc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_strlen.c
OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all