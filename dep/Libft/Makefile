# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aldgonza <aldgonza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 15:12:10 by aldgonza          #+#    #+#              #
#    Updated: 2023/04/17 17:47:06 by aldgonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
HEADER	= header/libft.h
SRCS	= basic/ft_isalpha.c \
		basic/ft_isdigit.c \
		basic/ft_isalnum.c \
		basic/ft_isascii.c \
		basic/ft_isprint.c \
		arr_handle/ft_strlen.c \
		mem_handle/ft_memset.c \
		mem_handle/ft_bzero.c \
		mem_handle/ft_memcpy.c \
		mem_handle/ft_memmove.c \
		arr_handle/ft_strlcpy.c \
		arr_handle/ft_strlcat.c \
		basic/ft_toupper.c \
		basic/ft_tolower.c \
		arr_handle/ft_strchr.c \
		arr_handle/ft_strrchr.c \
		arr_handle/ft_strncmp.c \
		mem_handle/ft_memcmp.c \
		mem_handle/ft_memchr.c \
		arr_handle/ft_strnstr.c \
		arr_handle/ft_atoi.c \
		mem_handle/ft_calloc.c \
		arr_handle/ft_strdup.c \
		arr_handle/ft_substr.c \
		arr_handle/ft_strjoin.c \
		arr_handle/ft_strtrim.c \
		arr_handle/ft_split.c \
		arr_handle/ft_itoa.c \
		arr_handle/ft_strmapi.c \
		arr_handle/ft_striteri.c \
		basic/ft_putchar_fd.c \
		basic/ft_putstr_fd.c \
		basic/ft_putendl_fd.c \
		basic/ft_putnbr_fd.c \

BSSRCS	= ls_handle/ft_lstnew_bonus.c \
		ls_handle/ft_lstsize_bonus.c \
		ls_handle/ft_lstlast_bonus.c \
		ls_handle/ft_lstadd_front_bonus.c \
		ls_handle/ft_lstadd_back_bonus.c \
		ls_handle/ft_lstdelone_bonus.c \
		ls_handle/ft_lstiter_bonus.c \
		ls_handle/ft_lstclear_bonus.c \
		ls_handle/ft_lstmap_bonus.c \

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
OBJS	= ${SRCS:%.c=%.o}
BSOBJS	= ${BSSRCS:%.c=%.o}

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo Creating object: $@

$(NAME): ${HEADER} ${OBJS}
		@ar rc $(NAME) $(OBJS)
		@echo Compiling library: $(NAME)

.PHONY: all clean fclean re

all: $(NAME)

bonus: ${HEADER} ${OBJS} ${BSOBJS}
		@ar rc $(NAME) $(OBJS) $(BSOBJS)
		@echo Compiling bouns: $(NAME)
		@touch $@

clean:
	@echo Deleting Objects $(OBJS) $(BSOBJS)
	@rm -f $(OBJS) $(BSOBJS) bonus

fclean: clean
	@echo Deleting Library $(NAME)
	@rm -f $(NAME)

re: fclean all
