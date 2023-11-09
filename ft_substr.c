/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:58:41 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/09 17:47:07 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	if (start > (unsigned int)ft_strlen((char *)s))
	{
		return ("");
	}
	if (len > (size_t)ft_strlen((char *)s))
		len = (size_t)ft_strlen((char *)s);
	result = NULL;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* #include <stdio.h>
int	main(void)
{
	char str[] = "Salut cv ou quoi ?";
	printf("%s", ft_substr("tripouille", 100, 1));
} */