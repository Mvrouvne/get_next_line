# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: machaiba <machaiba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 22:16:49 by machaiba          #+#    #+#              #
#    Updated: 2022/10/30 22:44:58 by machaiba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

AR = ar

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c\
		ft_calloc.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_memchr.c\
		ft_memcpy.c\
		ft_memset.c\
		ft_strdup.c \
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strncmp.c\
		ft_strrchr.c\
		ft_toupper.c\
		ft_bzero.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_memcmp.c\
		ft_memmove.c\
		ft_strchr.c\
		ft_strlcat.c\
		ft_strlen.c\
		ft_strnstr.c\
		ft_tolower.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_split.c		
		
		
		

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) -rc $(NAME) $(OBJ)
	
clean :
	rm -rf $(OBJ)
	
fclean : clean
	rm -rf $(NAME)
	
re : fclean all