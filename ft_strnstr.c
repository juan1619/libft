/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubarros <jubarros@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:28:24 by jubarros          #+#    #+#             */
/*   Updated: 2024/05/13 18:56:26 by jubarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needdle, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*result;

	i = 0;
	result = NULL;
	if (needdle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (needdle[j] != '\0'
			&& haystack[i + j] == needdle[j] && (i + j) < len)
		{
			if (j == 0)
				result = &haystack[i];
			j++;
		}
		if (needdle[j] == '\0')
			return ((char *)result);
		++i;
	}
	return (NULL);
}
