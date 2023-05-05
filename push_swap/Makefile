# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/08 16:09:59 by machaiba          #+#    #+#              #
#    Updated: 2023/03/10 00:38:51 by machaiba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = CC

CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c\
		check_arguments.c\
		ft_split.c\
		ft_substr.c\
		ft_strlen.c\
		ft_strdup.c\
		ft_strjoin.c\
		ft_atoi.c\
		stacks.c\
		ft_lstadd_front.c\
		ft_lstnew.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstsize.c\
		sorting.c\
		instructions.c\
		instructions2.c\
		instructions3.c\
		smallest_node.c\
		sorting2.c\
		sorting3.c\
		sort_anything.c\
		

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all