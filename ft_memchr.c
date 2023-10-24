/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:03:46 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/10 11:38:01 by eburnet          ###   ########.fr       */
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