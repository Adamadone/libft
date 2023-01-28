# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azacios <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 15:41:23 by azacios           #+#    #+#              #
#    Updated: 2023/01/17 15:41:24 by azacios          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_strrchr.c \
		ft_strchr.c \

OBJS = ${SRCS:.c=.o}

PRE = ./srcs/

HEAD = ./includes/

NAME = libft.a

AR = ar rc

RM = rm -f

GCC = gcc

CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

.c.o: 
	${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}
${NAME}: ${OBJS}
		${AR} ${NAME} ${OBJS}	
clean:
	rm -f ${OBJS}
fclean: clean
		rm -f ${NAME}
re:		fclean all

.PHONY:		all clean fclean re