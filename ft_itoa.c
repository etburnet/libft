/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:35:40 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/07 16:30:13 by eburnet          ###   ########.fr       */
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
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_negative;
	int		size;

	size = ft_count_digits(n);
	is_negative = 0;
	str = NULL;
	str = malloc(sizeof(char) * (10 + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
		str[0] = '-';
	}
	str[size + is_negative] = '\0';
	while (size > 0)
	{
		str[size + is_negative - 1] = n % 10 + 48;
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