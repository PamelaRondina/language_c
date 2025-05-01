#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (c - 32);
	return (c);
}
// int main(void)
// {
// 	int i, j;

// 	i = 'a';
// 	j = 'a';
// 	printf("%d\t", ft_toupper(i));
// 	printf("%d\t", toupper(i));

// }