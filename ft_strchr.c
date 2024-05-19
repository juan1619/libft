/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubarros <jubarros@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:47:43 by jubarros          #+#    #+#             */
/*   Updated: 2024/05/13 18:55:28 by jubarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	uc = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == uc)
			return ((char *)&s[i]);
		i++;
	}
	if (uc == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[50] = "dHOLA Pppp7";
	char	*result;

	result = ft_strchr(str, ' ');
	if (result != NULL)
		printf("1st coincidence or NULL value: '%c'\n", *result);
	else
		printf("No coincidence.\n");
	return (0);
}
*/