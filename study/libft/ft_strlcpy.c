
#include "libft.h"

//copia uma src para buffer de dest, com um limite de tamanho (size)
//garante que (dest) seja sempre nulo-terminado, desde que o tamanho
//seja maior que zero
//apresentar apenas o valor final 
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	i = 0;
	len_src = 0;
	len_src = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}



// int	main()
// {
// 	const char source[] = "abcdef";
// 	char dest[] = "";

// 	printf("ft_strlcpy: %zu\n", ft_strlcpy(dest, source, 5));
// 	printf("dest: %s\n", dest);
// // deletar
// 	printf("strlcpy: %zu\n", strlcpy(dest, source, 5));
// 	printf("dest: %s\n", dest);
// }