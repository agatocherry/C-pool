NAME = ft_tail
CC = gcc
INCLUDEFILES = ft_tail.h
CFLAGS = -Wall -Werror -Wextra
IFLAGS = -L $(INCLUDEFILES)
SOURCES = ft_atoi.c ft_print.c ft_tail.c ft_tail_print.c
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