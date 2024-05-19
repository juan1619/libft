/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubarros <jubarros@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:47:48 by jubarros          #+#    #+#             */
/*   Updated: 2024/05/13 18:54:30 by jubarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		++i;
	}
	return (b);
}
/*
int	main(void)
{
	char	str[30];

	ft_memset(str, 'F', 5);
	printf("string after ft_memset: %s\n", str);
	return (0);
}
*/