/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:57:08 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/10 09:51:20 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*chr;

	chr = (char *)s;
	while (*chr != '\0')
	{
		if (*chr == c)
			return (chr);
		chr++;
	}
	return (NULL);
}

/* #include <stdio.h>
int	main(void)
{
	char	*s = "Salut les gens";
	int		c;
	
	c = 108;
	printf("%s", ft_strchr(s, c));
} */