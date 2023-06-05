NAME = libftprintf.a
SRCS = src/ft_printf.c src/handle_char.c src/handle_string.c src/handle_pointer.c src/handle_integer.c\
		utils/count_digits.c src/handle_unsigned.c utils/ft_put_unsigned_fd.c
OBJS = $(SRCS:%.c=%.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./include
LIBFT_LIB = ./libft/libft.a
LIBFT = ./libft


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(NAME) -o ft_printf

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	make -C $(LIBFT)
	cp $(LIBFT_LIB) $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) ft_printf

re: fclean all

.PHONY: all clean fclean re