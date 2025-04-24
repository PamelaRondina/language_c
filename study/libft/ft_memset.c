
#include "libft.h"

//ft que altera a string a partir da quantidade do size_t

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t	i;

	ptr = (unsigned char *)s;
	i = 0;
	//((unsigned char *)s)[i] = '0'
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main()
{
	char teste[] = "Swim";

	printf("%s\n", teste);
	ft_memset(teste, 'A', 10);
	printf("%s\n", teste);
	memset(teste, 'A', 10);
	printf("%s\n", teste);
}*/
