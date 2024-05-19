/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubarros <jubarros@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:09:30 by jubarros          #+#    #+#             */
/*   Updated: 2024/05/13 18:54:13 by jubarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*tmp_d;
	const unsigned char	*tmp_s;

	if (!dst && !src)
		return (NULL);
	tmp_d = (unsigned char *)dst;
	tmp_s = (const unsigned char *)src;
	if (tmp_d == tmp_s)
		return (dst);
	if (tmp_d < tmp_s || tmp_d >= (tmp_s + len))
	{
		while (len--)
			*tmp_d++ = *tmp_s++;
	}
	else
	{
		tmp_d += len;
		tmp_s += len;
		while (len--)
			*--tmp_d = *--tmp_s;
	}
	return (dst);
}
/*
int	main(void)
{
	char	source[50] = "12345";
	char	dest[50] = "ABCDE";

	ft_memmove(dest, source, 3);
	printf("resultado final: %s", dest);
	return (0);
}
*/