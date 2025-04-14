/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prondina <prondina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:26:34 by prondina          #+#    #+#             */
/*   Updated: 2025/04/11 16:32:24 by prondina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main()
{
	int a = '!';
	int b = 127;

	printf("%d\t", ft_isprint(a));
	printf("%d\n", isprint(a));
	printf("%d\t", ft_isprint(b));
	printf("%d\n", isprint(b));
}
*/