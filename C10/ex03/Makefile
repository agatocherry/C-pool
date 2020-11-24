NAME = ft_hexdump
CC = gcc
INCLUDEFILES = ft.h
CFLAGS = -Wall -Werror -Wextra
IFLAGS = -L $(INCLUDEFILES)
SOURCES = ft_hexdump.c ft_utils.c ft_utils_2.c main.c
OBJS := $(SOURCES:c=o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS) $(CFLAGS) 

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re install