/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:03:46 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/07 13:47:19 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	size_t	strlen;

	i = 0;
	str = (char *)s;
	strlen = ft_strlen(str);
	while (i < n && n <= strlen)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/* 
#include <stdio.h>
int	main()
{
	char *rslt = ft_memchr("Salut cv ?", 117, 5);
	printf("%s", rslt);
} */