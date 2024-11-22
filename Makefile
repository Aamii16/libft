# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amzahir <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 01:19:47 by amzahir           #+#    #+#              #
#    Updated: 2024/11/22 20:43:50 by amzahir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJS = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
	ft_isdigit.o ft_isprint.o ft_itoa.o ft_memchr.o ft_memcmp.o ft_memcpy.o \
	ft_memmove.o ft_memset.o ft_putchar_fd.o ft_putendl_fd.o ft_putstr_fd.o \
	ft_putnbr_fd.o ft_split.o ft_strchr.o ft_strrchr.o ft_strdup.o ft_striteri.o \
	ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strmapi.o ft_strncmp.o \
	ft_strnstr.o ft_strtrim.o ft_substr.o ft_tolower.o ft_toupper.o

BONUS_OBJ = ft_lstadd_back_bonus.o ft_lstadd_front_bonus.o  ft_lstnew_bonus.o \
	ft_lstclear_bonus.o ft_lstdelone_bonus.o ft_lstiter_bonus.o \
	ft_lstlast_bonus.o ft_lstmap_bonus.o ft_lstsize_bonus.o 

NAME = libft.a 

DEP = libft.h

all: $(NAME)

%.o: %.c $(DEP)
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $?

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ) $?

clean:
	rm -f $(OBJS) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
.SECONDARY:
