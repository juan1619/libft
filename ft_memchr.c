/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubarros <jubarros@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 11:13:00 by jubarros          #+#    #+#             */
/*   Updated: 2024/05/13 18:53:47 by jubarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	int			j;
	const char	*result;
	char		str1[50] = "HOLA";

	j = 'A';
	result = ft_memchr(str1, j, 3);
	if (result != NULL)
		printf("1st same argument: %c", j);
	else
		printf("not found");
	return (0);
}
*/