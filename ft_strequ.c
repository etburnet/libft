/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:45:22 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/24 11:58:26 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else
		return (0);
}

/* #include <stdio.h>
int	main(void)
{
	char	*str_a = "Salut gabin";
	char	*str_b = "Salut gabin";

	printf("%d", ft_strequ(str_a, str_b));
} */