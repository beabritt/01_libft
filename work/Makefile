SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c 
OBJS= $(SRC:.c=.o)
NAME = libft.a
DPS = libft.h

CC = gcc

# r es para reemplazar los nuevos files por los anteriores, c para crear la libreria si no existe
# aun y s crea un directorio para que sea mas facil aceder a las funciones

AR = ar -rcs
CFLAGS = -Wall -Werror -Wextra

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *~ $(NAME)

fclean:
	rm -f *~ $(NAME) *.o
	

re: fclean all
