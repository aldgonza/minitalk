# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 15:12:10 by aldgonza          #+#    #+#              #
#    Updated: 2023/04/17 17:53:33 by aldgonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= client
HEADER	= include/minitalk.h
SRCS	= main.c \
		\

DEP		= dep/Libft/libft.a \
		dep/Printf/libftprintf.a \
		\

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
OBJS	= ${SRCS:%.c=%.o}

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo Creating objects: $@

$(NAME): ${HEADER} ${OBJS} $(DEP)
		@$(CC) $(CFLAGS) $(SRCS) $(DEP) -o $(NAME)
		@echo Compiling Client: $(NAME)

.PHONY: all clean fclean re

all: $(NAME)

$(DEP):
	@make -C dep/Libft
	@make -C dep/Printf
	
clean:
	@echo Deleting Objects: $(OBJS)
	@rm -f $(OBJS)
	@make clean -C dep/Libft
	@make clean -C dep/Printf

fclean: clean
	@echo Deleting Client: $(NAME)
	@rm -f $(NAME)
	@make fclean -C dep/Libft
	@make fclean -C dep/Printf

re: fclean all
