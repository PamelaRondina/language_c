#ifndef LIBFT_H

# define LIBFT_H

#include <stdio.h>


#include <string.h>
#include <ctype.h>
#include <string.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void *ft_memset(void *s, int c, size_t n);
 


#endif