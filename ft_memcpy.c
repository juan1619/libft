/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubarros <jubarros@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:06:01 by jubarros          #+#    #+#             */
/*   Updated: 2024/05/13 18:54:02 by jubarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	while (n--)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	source[50] = "12345ABCD?";
	char	dest[50];

	ft_memcpy(dest, source, 4);
	printf("parte copiada %s\n", dest);
	return (0);
}
*/