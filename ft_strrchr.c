/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:07:26 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/09 10:52:27 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*chr;
	int		slen;

	chr = (char *)s;
	slen = ft_strlen(chr);
	while (*chr != '\0' && slen >= 0)
	{
		if (chr[slen] == (char)c)
			return (&chr[slen]);
		slen--;
	}
	if (chr[slen] == (char)c)
		return (&chr[slen]);
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