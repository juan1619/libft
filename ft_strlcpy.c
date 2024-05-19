/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubarros <jubarros@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:22:07 by jubarros          #+#    #+#             */
/*   Updated: 2024/05/13 18:56:00 by jubarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (dstsize > 0)
	{
		i = 0;
		while ((i < dstsize -1) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}
/*
int	main(void)
{
	char	dest[50] = "hola paco5555s";
	char	source[50] = "hola paco 3";

	ft_strlcpy(dest, source, 12);
	printf("después de strlcpy: %s\n", dest);
	return (0);
}
*/