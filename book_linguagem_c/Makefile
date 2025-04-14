#Qual compilador usar?
CC := cc

# Compiler Flags | Wall: ativa todos os avisos básicos
# Wextra: ativa avisos adicionais
# Werror: transforma avisos em erros
CFLAGS := -Wall -Wextra -Werror -Iinclude

#Caminho para as funçoes 
#### NECESSARIO MENCIONAR O NOME DO ARQUIVO/FUNCAO??
SRC := src/ft_putchar.c

# os arquivos principais estao na pasta atual
#MAIN_DIR := .
MAIN_DIR := cap_02

# o nome do programa que será gerado
NAME := programa

#PROG è o nome do programa que será passado no make
# Exemplo: make run PROG=prog0101

MAIN := $(MAIN_DIR)/$(PROG).c

all: $(NAME)

$(NAME): $(SRC) $(MAIN)
	$(CC) $(CFLAGS) $(SRC) $(MAIN) -o $(NAME)

run: $(NAME)
	./$(NAME)

clean:
	rm -f $(NAME)

re: clean all



cc
Flags
nome
src (Funcao que quero incluir)
MAIN

all
clean
re