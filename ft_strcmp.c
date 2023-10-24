/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:02:46 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/10 10:09:59 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/* #include <stdio.h>
int	main(void)
{
	char	*str_a = "Salut gabin";
	char	*str_b = "Salut gabim";

	printf("%d", ft_strcmp(str_a, str_b));
} */