NAME = ft_cat
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES = ft_cat.c
OBJS := $(SOURCES:c=o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) 

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean