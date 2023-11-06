/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:27:22 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/06 15:11:03 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

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