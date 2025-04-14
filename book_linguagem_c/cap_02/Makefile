CC := cc
CFLAGS := -Wall -Wextra -Werror -I../include

NAME := $(PROG)

SRC := ../src/ft_putchar.c

MAIN_DIR := .

#PROG è o nome do programa que será passado no make
# Exemplo: make run PROG=prog0101
# variavel sem necessidade de ser declarada acima, chamada no terminal

MAIN := $(MAIN_DIR)/$(PROG).c

$(NAME): $(SRC) $(MAIN)
	$(CC) $(CFLAGS) $(SRC) $(MAIN) -o $(NAME)

all: $(NAME)

run: all
	./$(NAME)

clean:
	rm -f $(NAME)

re: clean all run