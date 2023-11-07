/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:35:07 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/07 14:11:32 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *str_a, const char *str_b, size_t n)
{
	char	*str;
	char	*substr;
	size_t	i;
	size_t	j;

	str = (char *)str_a;
	substr = (char *)str_b;
	i = 0;
	j = 0;
	while (str[i] != '\0' && j <= n)
	{
		while (str[i] == substr[j] && j < n)
		{
			i++;
			j++;
		}
		if (j == (size_t)ft_strlen(substr))
			return (&str[i - j]);
		j = 0;
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
int	main(void)
{
	char	*str_a = "Salut cv coucou gab, cv les gars ?";
	char	*str_b = "cv";
	int		size = 10;

	printf("%s", ft_strnstr(str_a, str_b, size));
} */