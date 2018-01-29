# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msharpe <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/21 13:37:09 by msharpe           #+#    #+#              #
#    Updated: 2018/01/28 17:50:40 by msharpe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILENAMES	= ft_atoi.c ft_bzero.c ft_numlen.c ft_print_hex.c ft_print_hexup.c\
			  	ft_print_octal.c ft_printf.c ft_putchar.c ft_putnbr.c\
				ft_putnbrup.c ft_putstr.c initializefunc.c printfconvert.c\
				printfflags.c printfnumbers.c printfwriter.c\
				ft_frontloadflag.c ft_midloadflag.c ft_backloadflag.c\
				printfsystem.c
				  

NAME		= libftprintf.a
CC			= gcc
SRCS		= $(addprefix libftprintf/,$(FILENAMES))
OBJS		= $(FILENAMES:.c=.o)
CFLAGS		= -c -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
