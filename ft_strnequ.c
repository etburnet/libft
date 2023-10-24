/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:58:47 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/24 15:17:19 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n || *s1) && *s1 == *s2)
	{
		s1++;
		s2++;
		i++;
	}
	if (s1[i] == s2[i])
		return (1);
	else
		return (0);
}

/* #include <stdio.h>
int	main(void)
{
	char	*str_a = "Salut gabin";
	char	*str_b = "Salut ethan";

	printf("%d", ft_strnequ(str_a, str_b, 5));
} */