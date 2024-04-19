NAME = libftprintf.a

SRCS = ft_printf.c\
		ft_print_c.c\
		ft_print_s.c\
		ft_supp.c\
		ft_print_int.c\
		ft_print_pxX.c\
		ft_print_u.c\
		ft_supp.c

# SRCSB =

OBJ = $(SRCS:%.c=%.o)

COMPILER = cc

CFLAGS = -Wall -Wextra -Werror

all : mandatory
	ar -crs $(NAME) $(OBJ)

mandatory :
	$(COMPILER) $(CFLAGS) -c $(SRCS)

bonus : all

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

