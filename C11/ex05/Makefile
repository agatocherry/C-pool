NAME = do-op
CC = @gcc
INCLUDEFILES = do_op.h
CFLAGS = -Wall -Werror -Wextra
IFLAGS = -L $(INCLUDEFILES)
SOURCES = print.c do_op.c main.c
OBJS := $(SOURCES:c=o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS) $(CFLAGS) 

clean:		
			@rm -rf $(OBJS)

fclean:		clean
			@rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re install