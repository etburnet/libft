/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:13:45 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/10 09:59:33 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(const char *str_a, const char *str_b)
{
	char	*str;
	char	*substr;
	int		sublen;
	int		i;
	int		j;

	str = (char *)str_a;
	substr = (char *)str_b;
	sublen = ft_strlen(substr);
	i = 0;
	j = 0;
	while (str[i] != '\0' && j <= sublen)
	{
		while (str[i] == substr[j])
		{
			i++;
			j++;
		}
		if (j == sublen)
			return (&str[i - sublen]);
		i++;
		j = 0;
	}
	return (NULL);
}

/* #include <stdio.h>
int	main(void)
{
	char	*str_a = "Salut gab, cv les gars ?";
	char	*str_b = "yo";

	printf("%s", ft_strstr(str_a, str_b));
} */