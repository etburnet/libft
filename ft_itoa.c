/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:35:40 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/07 17:14:31 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	ft_count_digits(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	if (i == 0)
		i = 1;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_negative;
	int		size;

	size = ft_count_digits(n);
	is_negative = (n < 0);
	if (n == 0)
		size = 1;
	str = malloc(sizeof(char) * (size + is_negative + 1));
	if (str == NULL)
		return (NULL);
	str[size + is_negative] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[size + is_negative - 1] = (n % 10) * (is_negative ? -1 : 1) + 48;
		n = n / 10;
		size--;
	}
	return (str);
}

/* #include <stdio.h>
int main()
{
	printf("%s", ft_itoa(0));
} */