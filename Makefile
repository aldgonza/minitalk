# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 15:12:10 by aldgonza          #+#    #+#              #
#    Updated: 2023/04/18 18:09:24 by aldgonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

S_NAME	= server

C_NAME	= client

HEADER	= include/minitalk.h

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

S_SRCS	= src/server/main.c \
		src/server/server.c \
		\
		
C_SRCS	= src/client/main.c \
		src/client/client.c \
		\

DEP		= dep/Libft/libft.a \
		dep/Printf/libftprintf.a \
		\


S_OBJS	= ${S_SRCS:%.c=%.o}

C_OBJS	= ${C_SRCS:%.c=%.o}

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo Creating objects: $@

$(S_NAME): ${HEADER} ${S_OBJS} $(DEP)
		@$(CC) $(CFLAGS) $(S_SRCS) $(DEP) -o $(S_NAME)
		@echo Compiling Server: $(S_NAME)

$(C_NAME): ${HEADER} ${C_OBJS} $(DEP)
		@$(CC) $(CFLAGS) $(C_SRCS) $(DEP) -o $(C_NAME)
		@echo Compiling Client: $(C_NAME)

.PHONY: all clean fclean re

all: $(C_NAME) $(S_NAME)

$(DEP):
	@make -C dep/Libft
	@make -C dep/Printf
	
clean:
	@echo Deleting Objects: $(C_OBJS)
	@rm -f $(C_OBJS)
	@echo Deleting Objects: $(S_OBJS)
	@rm -f $(S_OBJS)
	@make clean -C dep/Libft
	@make clean -C dep/Printf

fclean: clean
	@echo Deleting Client: $(C_NAME)
	@rm -f $(C_NAME)
	@echo Deleting Server: $(S_NAME)
	@rm -f $(S_NAME)
	@make fclean -C dep/Libft
	@make fclean -C dep/Printf

re: fclean all
