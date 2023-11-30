# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmeerber <mmeerber@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/12 19:15:48 by mmeerber          #+#    #+#              #
#    Updated: 2023/11/29 11:34:03 by mmeerber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes
NAME = ./libft_and_more.a
SRCS = libft/ft_atoi.c\
	   libft/ft_bzero.c\
	   libft/ft_calloc.c\
	   libft/ft_isalnum.c\
	   libft/ft_isalpha.c\
	   libft/ft_isascii.c\
	   libft/ft_isdigit.c\
	   libft/ft_isprint.c\
	   libft/ft_itoa.c\
	   libft/ft_lstadd_back_bonus.c\
	   libft/ft_lstadd_front_bonus.c\
	   libft/ft_lstlast_bonus.c\
	   libft/ft_lstnew_bonus.c\
	   libft/ft_lstsize_bonus.c\
	   libft/ft_memchr.c\
	   libft/ft_memcmp.c\
	   libft/ft_memcpy.c\
	   libft/ft_memmove.c\
	   libft/ft_memset.c\
	   libft/ft_putchar_fd.c\
	   libft/ft_putendl_fd.c\
	   libft/ft_putnbr_fd.c\
	   libft/ft_putstr_fd.c\
	   libft/ft_split.c\
	   libft/ft_strchr.c\
	   libft/ft_strdup.c\
	   libft/ft_striteri.c\
	   libft/ft_strjoin.c\
	   libft/ft_strlcat.c\
	   libft/ft_strlcpy.c\
	   libft/ft_strlen.c\
	   libft/ft_strmapi.c\
	   libft/ft_strncmp.c\
	   libft/ft_strnstr.c\
	   libft/ft_strrchr.c\
	   libft/ft_strtrim.c\
	   libft/ft_substr.c\
	   libft/ft_tolower.c\
	   libft/ft_toupper.c\
	   ft_printf/ft_hexa_maj.c\
	   ft_printf/ft_hexa_min.c\
	   ft_printf/ft_nbr_no_neg.c\
	   ft_printf/ft_printf.c\
	   ft_printf/ft_putchar.c\
	   ft_printf/ft_putnbr.c\
	   ft_printf/ft_putstr.c\
	   ft_printf/ft_search_flag.c\
	   ft_printf/ft_strlen.c


INCLUDE = libft_and_more.h

OBJECTS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJECTS) $(INCLUDE)
	ar -rc $@ $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
