CLFAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = cc
AR = ar -rcs
SRC_DIR = src
# SRCB_DIR = srcb
INC_DIR = inc
OBJ_DIR = obj
# OBJB_DIR = objb
LIBFT = libft.a
LIBFT_DIR = libft
NAME = libftprintf.a

SRC = 	ft_printf.c\
		ft_print_int.c\
		ft_print_pxX.c\
		ft_print_s.c\
		ft_print_u.c\
		ft_print_c.c

# SRCB = 	ft_printf_bonus.c\
		ft_format_bonus.c\
		ft_parse_bonus.c\
		ft_print_chars_bonus.c\
		ft_print_numbers_bonus.c\
		ft_print_unsigned_numbers_bonus.c\
		ft_print_pointer_bonus.c\
		ft_print_hex_bonus.c

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

# OBJB = $(addprefix $(OBJB_DIR)/, $(SRCB:.c=.o))

all : $(NAME)

bonus: all

$(NAME): $(LIBFT) $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# $(OBJB_DIR)/%.o: $(SRCB_DIR)/%.c | $(OBJB_DIR)
#	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# $(OBJB_DIR):
#	mkdir -p $(OBJB_DIR)

$(LIBFT):
	make -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/$(LIBFT) .
	mv $(LIBFT) $(NAME)

clean:
	$(RM) $(OBJ_DIR)
	make -C libft clean

fclean: clean
	$(RM) $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re bonus
