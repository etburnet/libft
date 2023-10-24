/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:23:25 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/09 17:17:23 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;
	char	cr;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	cr = (char)c;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == cr)
			return ((void *)(d + i + 1));
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
int	main()
{
	char str[22] = "Hey guys, what's up ?";
	char str2[50];
	ft_memccpy(str2, str, 65, 15);
	printf("%s", str2);
} */