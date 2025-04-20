/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prondina <prondina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:34:11 by prondina          #+#    #+#             */
/*   Updated: 2025/04/16 18:08:28 by prondina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//pode copiar de tras pra frente e de frente pra tras
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptr_dest;
	unsigned char *ptr_src;
	size_t i;

	ptr_dest = (unsigned char*) dest;
	ptr_src = (unsigned char *) src;
	i = 0;

	if (ptr_dest > ptr_src)
	{
		i = n;
		while (i > 0)
		{
			ptr_dest[i - 1] = ptr_src[i -1];
			i--;
		}
	} 
	else 
	{
		memcpy(ptr_dest, ptr_src, n);
	}
	return(dest);
}
/*
int	main()
{
	int source1[5] = {1, 2, 3, 4, 5};
	int source2[5] = {1, 2, 3, 4, 5};
	int source3[5] = {1, 2, 3, 4, 5};
	int len = 5;
	int i = 0;

	printf("Antes da funcao\n");
	for (i = 0; i < len; i++)
		printf("%d\t", source1[i]);

	printf("\nUsando ft_memmove\n");
	ft_memmove(&source2[2], &source2[0], 3 * sizeof(int));
	for (i = 0; i < len; i++)
		printf("%d\t", source2[i]);

	printf("\nUsando memmove\n");
	ft_memmove(&source3[2], &source3[0], 3 * sizeof(int));
	for (i = 0; i < len; i++)
		printf("%d\t", source3[i]);
}*/