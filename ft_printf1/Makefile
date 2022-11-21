# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 16:43:57 by machaiba          #+#    #+#              #
#    Updated: 2022/11/08 19:19:44 by machaiba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

AR = ar

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c\
			ft_putchar.c\
			ft_putstr.c\
			ft_putnbr.c\
			ft_unputnbr.c\
			ft_tohexa.c

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) -rc $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
	