NAME = push_swap

SRCS = $(wildcard src/*.c)

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Werror -Wextra -Wall -fsanitize=address -g

all: $(NAME) 

$(NAME):	$(OBJS)
	make -C libft_and_more/
	$(CC) $(CFLAGS) $(OBJS) libft_and_more/libft_and_more.a -o $(NAME)

clean:
	rm -rf $(OBJS)
	make -C libft_and_more/ clean

fclean: clean
	rm $(NAME)
	make -C libft_and_more/ fclean

re:	fclean $(NAME)

.PHONY: all clean fclean re
