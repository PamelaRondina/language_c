NAME := libft.a

#-lbsd (strlcpy e strlcat)
CFLAGS := -Wall -Wextra -Werror -g 
CC := cc

SRC := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c

OBJ := $(SRC:.c=.o)

HEADER := libft.h
	
all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $< -I.

clean:
	rm -f $(OBJ)
#diretorio rm -rf

fclean: clean
	rm -f $(NAME)
	
re: fclean all