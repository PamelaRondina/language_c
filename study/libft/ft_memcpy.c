
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	size_t			i;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (ptr_dest);
}

// int	main()
// {
	// int source1[5] = {1, 2, 3, 4, 5};
	// int source[0];
	// int i arr[i]);= 0;

	// memcpy(NULL, NULL, 3 * sizeof(int));
	//printf("%s\n", memcpy(NULL, NULL, 3 * sizeof(int)));
	//printf("%s\n", NULL);
	//for (i = 0; i < 5; i++)
	//	printf("%d\t", source1[i]);
// }

// int main(void)
// {
// 	char dest[25];
// 	char *src = "Continue a Nadar!";
// 	ft_memcpy(dest, src, 4);
// 	printf("dest: %s\n", dest);
// }

// int main(void)
// {
// 	//printf("memcpy -> %s\n", memcpy(NULL, NULL, 2));
// 	printf("my memcpy -> |%s|\n", ft_memcpy("ola", NULL, 0));
// 	printf("memcpy -> |%s|\n", memcpy("ola", NULL, 0));
// }