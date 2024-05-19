/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubarros <jubarros@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:43:07 by jubarros          #+#    #+#             */
/*   Updated: 2024/05/13 18:51:47 by jubarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 65 || (c > 90 && c < 97)) || (c > 122))
		return (0);
	else
		return (1);
}
/*
int main(void)
{
	int 	result;

	result = ft_isalpha('3');

	if (result == 1)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	return (0);
}
*/ 