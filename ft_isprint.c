/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubarros <jubarros@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:58:57 by jubarros          #+#    #+#             */
/*   Updated: 2024/05/13 18:52:15 by jubarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	result = ft_isprint('\0');

	if (result == 1)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	return (0);
}
*/