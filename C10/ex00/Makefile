NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES = ft_display_file.c
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