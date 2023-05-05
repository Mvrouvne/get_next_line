# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/30 21:04:40 by machaiba          #+#    #+#              #
#    Updated: 2023/05/01 18:39:36 by machaiba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

CFLAGS = -Wall -Wextra -Werror

SRCS = minishell.c\

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
			cc $(CFLAGS) $(OBJS) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all