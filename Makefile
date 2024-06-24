NAME = push_swap
AR = ar -crs
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a
FT_PRINTF_PATH = ./ft_printf
FT_PRINTF = $(FT_PRINTF_PATH)/ft_printf.a

OBJ = push_swap.c\
	get_input.c\

$(LIBFT) : 
	make -C $(LIBFT_PATH) all

$(FT_PRINTF) :
	make -C $(FT_PRINTF_PATH) all

all : $(LIBFT) $(FT_PRINTF)
	$(AR) $(NAME)

clean =  
	rm -rf $(OBJ)
	make -C $(LIBFT_PATH) clean

utils = $(LIBFT) $(FT_PRINTF)
	@echo "Utils built successfully"

fclean = clean
	rm -rf $(NAME)
	make -C $(LIBFT_PATH) fclean

norm : 
	norminette *.c