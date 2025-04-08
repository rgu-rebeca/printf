NAME        = libftprintf.a

LIBFT_DIR   = libft
LIBFT_A     = $(LIBFT_DIR)/libft.a
LIBFT_H     = $(LIBFT_DIR)
CC          = cc
CFLAGS      = -Wall -Wextra -Werror
AR          = ar rcs
RM          = rm -f

INCLUDE     = -I include -I $(LIBFT_H)

SRCS        = src/ft_printf.c \
              src/print_c.c \
              src/print_s.c \
              src/print_x_upper.c \
              src/print_d.c \
              src/print_p.c \
              src/print_u.c \
              src/print_x.c

OBJS        = $(SRCS:src/%.c=obj/%.o)
BUILD_DIR   = build

all: $(NAME)

$(LIBFT_A):
	@make -C $(LIBFT_DIR)

obj/%.o: src/%.c
	@mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE)

$(NAME): $(LIBFT_A) $(OBJS)
	@mkdir -p $(BUILD_DIR)
	@cp $(LIBFT_A) $(BUILD_DIR)/
	@cd $(BUILD_DIR) && ar x ../$(LIBFT_A)
	$(AR) $(NAME) $(OBJS) $(BUILD_DIR)/*.o

# 清理
clean:
	@make clean -C $(LIBFT_DIR)
	$(RM) $(OBJS)
	@rm -rf $(BUILD_DIR)

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

