
NAME	= libftprintf.a
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
CC		= cc
CFLAGS	= -Werror -Wall -Wextra
AR		= ar rcs
RM		= rm -f
SRCS	= src/ft_printf.c \
		src/print_c.c \
		src/print_s.c \
		src/print_x_upper.c \
		src/print_d.c \
		src/print_p.c \
		src/print_u.c \
		src/print_x.c
OBJS	= $(SRCS:src/%.c=%.o)
INCLUDE = -I include
all: $(NAME)
$(LIBFT):
	@make -C $(LIBFT_DIR)
$(NAME): $(LIBFT) $(OBJS)
	$(AR) $(NAME) $(OBJS) $(LIBFT)
%.o: src/%.c | $(LIBFT)
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE)
clean:
	@make clean -C $(LIBFT_DIR)
	$(RM) $(OBJS)
fclean: clean
	@make fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)
re: fclean all
-PHONY: all clean fclean re
