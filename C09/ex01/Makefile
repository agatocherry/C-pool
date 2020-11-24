SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS = ${addprefix srcs/, ${SRC}}
OBJS = ${SRCS:.c=.o}
NAME = libft.a

.c.o:
			${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

all :		${NAME}

${NAME} :	${OBJS}
			ar rc $@ $^
clean :
			rm -f ${OBJS}
fclean :	clean
			rm -f ${NAME}

re :		fclean all

.PHONY: all clean fclean re