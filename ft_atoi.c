/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:23:33 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/07 11:23:54 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *nptr)
{
	char	*str;
	int		i;
	int		isnegative;
	int		result;

	str = (char *)nptr;
	i = 0;
	isnegative = 1;
	result = 0;
	while (str[i] != '\0' && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		isnegative *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * isnegative);
}

/* #include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_atoi("   -26fz5"));
	//printf("%d", atoi("   -d1245salut"));
} */