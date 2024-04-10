Name = libftprintf.a

SRCS = ft_printf.c\

OBJ = $(SRCS:%.c=%.o)

LIBFT = ./libft/libft.a

COMPILER = cc

CFALAGS = -Wall -Wextra -Werror
 
all : SRCS bonus
	ar -crs $(NAME) $(OBJ)\

mandatory :
	$(COMPILER) $(CFLAGS) -c $(SRCS)

bonus : all

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all