/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubarros <jubarros@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:56:51 by jubarros          #+#    #+#             */
/*   Updated: 2024/05/13 18:56:32 by jubarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*last_position;
	unsigned char	uc;

	i = 0;
	last_position = NULL;
	uc = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == uc)
			last_position = ((char *)&s[i]);
		i++;
	}
	if (s[i] == uc)
		return ((char *)&s[i]);
	return (last_position);
}
/*
int	main(void)
{
	char	str[50] = "HOLA Paco";
	char	*result;

	result = ft_strrchr(str, 'A');
	if (result != NULL)
		printf ("1st coincidence or NULL value: '%c'\n", *result);
	else
		printf("no coincidences");
	return (0);
}
*/