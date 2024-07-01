NAME = push_swap
AR = ar -crs
CC = cc -Wall -Wextra -Werror -c

# libft
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

SRC = push_swap.c\
	get_input.c\
	assign_stack.c\

OBJ = $(SRC:%.c=%.o)

$(LIBFT) : 
	make -C $(LIBFT_PATH)
	@echo libft done!!!


all : utils
	$(AR) $(NAME) $(OBJ)

mandatory :
	$(CC) $(SRC)

clean =  
	rm -rf $(OBJ)
	make -C libft clean

utils : $(LIBFT)
	@echo "Utils built successfully"

fclean = clean
	rm -rf $(NAME)
	make -C $(LIBFT_PATH) fclean

echo :
	@echo "hahaha"

norm : 
	norminette *.c