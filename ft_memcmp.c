/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:38:25 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/07 11:23:18 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1 && s1 == s2 && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	return (s1 - s2);
}

/* #include <stdio.h>
int	main(void)
{
	char	*str_a = "Salut";
	char	*str_b = "Salut";
	int		size = 5;

	printf("%d", ft_memcmp(str_a, str_b, size));
} */