

CC = cc
CFLAGS = -Werror -Wextra -Wall -Iincludes
NAME = libftprintf.a
SRCS =	ft_hexa_maj.c \
		ft_hexa_min.c \
		ft_nbr_no_neg.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_search_flag.c

INCLUDE = ft_printf.h

OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) $(INCLUDE)
	ar -rc $@ $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: all clean
	gcc main.c libftprintf.a
	./a.out
	rm a.out

.PHONY: all clean fclean re
