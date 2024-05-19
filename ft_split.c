/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubarros <jubarros@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:46:22 by jubarros          #+#    #+#             */
/*   Updated: 2024/05/13 18:55:22 by jubarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_argc(char const *s, char c)
{
	int	i;
	int	argcount;

	i = 0;
	argcount = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			argcount++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (argcount);
}

static void	ft_clean_mem(char **result, int i)
{
	while (i >= 0)
		free(result[i--]);
	free(result);
}

static char	**ft_indiv_words(char **result, char const *s, char c, int i)
{
	int	total_len;

	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				total_len = ft_strlen(s);
			else
				total_len = ft_strchr(s, c) - s;
			result[i] = ft_substr(s, 0, total_len);
			if (result[i] == NULL)
			{
				ft_clean_mem(result, i - 1);
				return (NULL);
			}
			s += total_len;
			i++;
		}
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		argc;
	char	**result;

	i = 0;
	argc = ft_count_argc(s, c);
	result = (char **)malloc((argc + 1) * (sizeof (char *)));
	if (result == NULL)
		return (NULL);
	if (!s || !result)
		return (NULL);
	result = ft_indiv_words(result, s, c, i);
	if (!result)
		return (NULL);
	return (result);
}
