/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:07:26 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/10 09:57:37 by eburnet          ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	char	*chr;
	int		slen;

	chr = (char *)s;
	slen = ft_strlen(chr);
	while (*chr != '\0' && slen >= 0)
	{
		if (chr[slen] == c)
			return (&chr[slen]);
		slen--;
	}
	return (NULL);
}

/* #include <stdio.h>
int	main(void)
{
	char	*s = "Salut les gens";
	int		c;
	
	c = 108; //"l" ASCII
	printf("%s", ft_strrchr(s, c));
} */