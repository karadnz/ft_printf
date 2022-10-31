# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkaraden <mkaraden@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 14:12:43 by mkaraden          #+#    #+#              #
#    Updated: 2022/10/31 14:13:06 by mkaraden         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putchr.c		\
	   ft_printf.c		\
	   ft_putnbr.c		\
	   ft_putnbru.c		\
	   ft_putnbruhex.c	\
	   ft_putptr.c		\
	   ft_putstr.c		\
	   ft_specifer.c	

OBJS= $(SRCS:.c=.o)

CC=	gcc

CFLAGS= -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm	-rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all