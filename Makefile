NAME	= libmy.a

CC	= gcc

RM	= rm -f

SRCS	= ./get_next_line.c \
	  ./my_putchar.c \
	  ./my_putstr.c \
	  ./my_realloc.c \
	  ./my_str_array.c \
	  ./my_strcat.c \
	  ./my_strcmp.c \
	  ./my_strdup.c \
	  ./my_strlen.c \
	  ./my_printf.c \
	  ./my_put_nbr.c \
	  ./my_strcpy.c \
	  ./sort_array.c \
	  ./clean_str.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar cr $(NAME) $(OBJS) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all