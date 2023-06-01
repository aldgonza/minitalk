# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 17:28:12 by aldgonza          #+#    #+#              #
#    Updated: 2023/04/17 17:43:40 by aldgonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
HEADER	= include/ft_printf.h
SRCS	= src/ft_printf.c \
		src/ft_utils.c \
		libft/ft_putstr_fd.c \
		libft/ft_putnbr_fd.c \
		libft/ft_putchar_fd.c \
		libft/ft_strlen.c \
		src/ft_print_p.c \
		src/ft_print_uint.c \
		src/ft_hex.c \
		src/ft_printx.c \

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
OBJS	= ${SRCS:%.c=%.o}

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo Creating object: $@

$(NAME): ${HEADER} ${OBJS}
		@ar rc $(NAME) $(OBJS)
		@echo Compiling library: $(NAME)

.PHONY: all clean fclean re

all: $(NAME)

clean:
	@echo Deleting Objects $(OBJS)
	@rm -f $(OBJS)

fclean: clean
	@echo Deleting Library $(NAME)
	@rm -f $(NAME)

re: fclean all
