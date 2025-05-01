#include "libft.h"

//Procura por um byte específico em uma área de memoria
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_s;

	ptr_s = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == (unsigned char)c)
			return (ptr_s + i);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char test[] = {10, 20, 30, 40, 50};
//     unsigned char *result = memchr(test, 30, 5);
// if (result)
//     printf("Valor encontrado: %p, %d\n", result, *result);  
// //Agora sim, mostra o endereço correto|
// else
//     printf("Valor não encontrado!\n");
// printf("Endereço de memoria:  %p, %d\n", &test[2], test[2]);
//
