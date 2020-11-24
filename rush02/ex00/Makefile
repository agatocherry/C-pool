CC = gcc
CFLAG = -Wall -Werror -Wextra

TARGET = rush-02

SOURCE = split.c search.c search_bis.c main.c parsing.c print.c utils.c
INCLUDE = main.h

OBJS = $(SOURCE:.c=.o)

all : $(TARGET)

%.c : %.o
	$(CC) $(CFLAG) -c $<

$(TARGET) : $(OBJS)
	$(CC) $(CFLAG)  -o $@ $^ -I $(INCLUDE)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all

.PHONY: all clean fclean re