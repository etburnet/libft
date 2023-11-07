/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:27:22 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/07 14:11:44 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;
	char			*s;

	s = (char *)src;
	i = 0;
	len = ft_strlen(s);
	while (s[i] && i < size - 1)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	while (i < size)
	{
		dst[i] = '\0';
		i++;
	}
	return (len);
}

/* #include <stdio.h>
int main()
{
	char dest[15];
	char src[] = "salut !";
	printf("%d", ft_strlcpy(dest, src, 2));
} */