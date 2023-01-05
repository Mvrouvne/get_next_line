# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 23:33:53 by machaiba          #+#    #+#              #
#    Updated: 2023/01/04 23:57:52 by machaiba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

CC = CC

AR = ar

CFLAGS = -Wall -Wextra -Werror

SRCS = pipex.c\
		ft_split.c\
		ft_strlen.c\
		ft_substr.c\
		ft_strdup.c\

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		$(AR) -rc $(NAME) $(OBJ) -o $(NAME)

clean : 
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all