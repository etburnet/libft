/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:57:30 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/17 17:00:17 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* void	ft_toupper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
} */

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(&s[i]);
		i++;
	}
}

/* #include <stdio.h>
int	main()
{
	char str[] = "Salut guys";
	ft_striter(str, ft_toupper);
	printf("%s\n", str);
} */