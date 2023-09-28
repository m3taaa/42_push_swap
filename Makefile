CC = gcc
CFLAGS = -Werror -Wextra -Wall -Iincludes
NAME = push_swap
SRCS = src/*.c\
	   src/op/*.c\
	   src/lst/*.c
INCLUDE = push_swap.h
OBJECTS = $(SRCS:.c=.o)

all:
	$(CC) $(CFLAGS) $(SRCS) libft/libft.a ft_printf/libftprintf.a -o $(NAME)

clean:
	rm $(NAME)

fclean: clean


re: fclean all

.PHONY: all clean fclean re
