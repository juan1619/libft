/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubarros <jubarros@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 09:30:40 by jubarros          #+#    #+#             */
/*   Updated: 2024/05/13 18:55:36 by jubarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*copy;

	i = 0;
	while (s1[0] != 0 && s1[i] != 0)
		i++;
	len = i;
	if (i != 0)
	{
		copy = (char *)malloc(sizeof(char) * (len +1));
		if (copy == NULL)
			return (NULL);
		ft_memcpy(copy, s1, len);
		copy[len] = '\0';
		return (copy);
	}
	else
	{
		copy = (char *)malloc(1);
		if (copy == NULL)
			return (NULL);
		copy[0] = '\0';
		return (copy);
	}
}
