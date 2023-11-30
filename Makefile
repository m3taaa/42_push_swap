NAME = push_swap

SRCS = src/algo.c\
	   src/main.c\
	   src/op.c\
	   src/parsing.c\
	   src/parsing_check.c\
	   src/push.c\
	   src/radix.c\
	   src/set_occ.c\
	   src/simple_sort.c\
	   src/simple_sort_utils.c\
	   src/swap.c\
	   src/utils.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Werror -Wextra -Wall

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
