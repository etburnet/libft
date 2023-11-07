/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:35:07 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/07 11:22:19 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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
		if (j == n)
			return (&str[i - n]);
		i++;
		j = 0;
	}
	return (NULL);
}

/* #include <stdio.h>
int	main(void)
{
	char	*str_a = "Salut coucou gab, cv les gars ?";
	char	*str_b = "cv";
	int		size = 3;

	printf("%s", ft_strnstr(str_a, str_b, size));
} */