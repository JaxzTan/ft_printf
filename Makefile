NAME = push_swap
AR = ar -crs
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a
FT_PRINTF_PATH = ./ft_printf
FT_PRINTF = $(FT_PRINTF_PATH)/ft_printf.a

SRC = push_swap.c\
	get_input.c\
	stack.c\

OBJ = $(SRC:%.c=%.o)

$(LIBFT) : 
	make -C $(LIBFT_PATH) all
	@echo libft done!!!

$(FT_PRINTF) :
	make -C $(FT_PRINTF_PATH) all
	@echo printf done!!!

all : $(LIBFT) $(FT_PRINTF)
	$(AR) $(NAME) $(OBJ)

clean =  
	rm -rf $(OBJ)
	make -C libft clean
	make -C ft_printf clean

utils = $(LIBFT) $(FT_PRINTF)
	@echo "Utils built successfully"

fclean = clean
	rm -rf $(NAME)
	make -C $(LIBFT_PATH) fclean

norm : 
	norminette *.c