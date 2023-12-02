# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 00:21:14 by tkerroum          #+#    #+#              #
#    Updated: 2023/11/29 14:20:14 by tkerroum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FUN = ft_isalpha.c ft_isdigit.c\
    ft_isalnum.c ft_isascii.c\
    ft_isprint.c ft_strlen.c\
    ft_memset.c ft_bzero.c\
    ft_memcpy.c ft_memmove.c\
    ft_strlcpy.c ft_strlcat.c\
    ft_toupper.c ft_tolower.c\
    ft_strchr.c ft_strrchr.c\
    ft_strncmp.c ft_memchr.c\
    ft_memcmp.c ft_strnstr.c\
    ft_atoi.c ft_calloc.c ft_strdup.c\
    ft_substr.c ft_strjoin.c ft_putnbr_fd.c\
    ft_strtrim.c ft_split.c\
    ft_itoa.c ft_strmapi.c\
    ft_striteri.c ft_putchar_fd.c\
    ft_putstr_fd.c ft_putendl_fd.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rc
RM = rm -f
OBG = $(FUN:.c=.o)


all: $(NAME)

$(NAME): $(OBG)
    $(AR) $(NAME) $(OBG)
    
clean: 
    $(RM) $(OBG)
fclean: clean
    $(RM) $(NAME)
re: fclean all