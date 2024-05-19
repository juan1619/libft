/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubarros <jubarros@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:34:55 by jubarros          #+#    #+#             */
/*   Updated: 2024/05/13 18:52:23 by jubarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_num(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_len_num(n);
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		ft_strlcpy(str, "-2147483648", 12);
	if (n == 0)
		str[0] = '0';
	if (n < 0 && n != -2147483648)
	{
		str[0] = '-';
		n *= -1;
	}
	str[i] = '\0';
	while (n != 0 && n != -2147483648)
	{
		i--;
		str[i] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
/*
int main(void) 
{
    int numero = -12345;
    char *cadena = ft_itoa(numero);

    printf("El número como cadena de caracteres es: %s\n", cadena);
    free(cadena);
    return 0;
}
*/
