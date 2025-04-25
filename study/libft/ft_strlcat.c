#include "libft.h"

//concatenar strings src + dst e 
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;
	size_t	j;

	j = 0;
	len_src = ft_strlen(src);
	if(!size)
		return (len_src);
	len_dst = ft_strlen(dst);
	i = len_dst;
	if (size <= len_dst)
		return (len_src + size);
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}


/*
int	main()
{
	char source[] = "abcdefghij";
	char source1[] = "abcdefghij";
	char dest[10] = "123";
	char dest1[10] = "123";
	printf("ft_strlcat: %zu\n", ft_strlcat(dest, source, 5));
	printf("dest: %s\n", dest);
	printf("strlcat: %zu\n", strlcat(dest1, source1, 5));
	printf("dest: %s\n", dest1);
}*/
// #include "libft.h"
// //concatenar strings src + dst e 
// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t len_src;
// 	size_t len_dst;
// 	size_t i;
// 	size_t j;	
// 	// len_src = 0;
// 	// len_dst = 0;
// 	j = 0;	
// 	len_src = ft_strlen(src);
// 	len_dst = ft_strlen(dst);
// 	i = len_dst;
// 	//se size for menor ou igual ao cumprimento da atual dest, significa
// 	//que nao ha espaco nem para concatenar
// 	//if (size <= len_dst)
// 	if (size <= len_dst)
// 	//retorno e o tamanho que a string teria se estivesse espaco suficiente
// 	//tamanho que a sting tentou ter! Verificacao importante!
// 		return (len_src + size);
// 	while(src[j] != '\0' && i < size - 1)
// 	//iniciar a copia!
// 	{
// 		dst[i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	dst[i] = '\0';
// 	return (len_dst + len_src);
// }
// /*
// int	main()
// {
// 	char source[] = "abcdefghij";
// 	char source1[] = "abcdefghij";	
// 	char dest[10] = "123";
// 	char dest1[10] = "123";	
// 	printf("ft_strlcat: %zu\n", ft_strlcat(dest, source, 5));
// 	printf("dest: %s\n", dest);
// 	printf("strlcat: %zu\n", strlcat(dest1, source1, 5));
// 	printf("dest: %s\n", dest1);
// }*/