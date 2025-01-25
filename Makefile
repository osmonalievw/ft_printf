NAME = libftprintf.a
LIBRARY = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBRARYDIR = ./libft
SRC =	ft_printf.c \
			for_char.c \
			for_digit.c \
			for_string.c \
			for_ptr.c \
			for_hex.c 


OBJ = $(SRC:.c=.o)

all: $(NAME)

makelibft:
	@make -C $(LIBRARYDIR)
	@cp $(LIBRARYDIR)/$(LIBRARY) .
	@mv $(LIBRARY) $(NAME)

$(NAME): makelibft $(OBJ)
	ar -r $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	cd $(LIBRARYDIR) && make clean

fclean: clean
	rm -f $(NAME)
	cd $(LIBRARYDIR) && make fclean

re: fclean all