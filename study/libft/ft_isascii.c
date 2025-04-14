/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prondina <prondina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:18:02 by prondina          #+#    #+#             */
/*   Updated: 2025/04/11 16:23:37 by prondina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main()
{
	int a = 0;
	int b = 250;

	printf("%d\t", ft_isascii(a));
	printf("%d\n", isascii(a));
	printf("%d\t", ft_isascii(b));
	printf("%d\n", isascii(b));
}*/