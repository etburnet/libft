/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:17:57 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/17 11:56:46 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
void test_function(unsigned int index, char *c)
{
    printf("Index: %u, Character: %c\n", index, *c);
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/* int	main()
{
	char str[] = "Salut guys";
	ft_striteri(str, test_function);
	printf("%s\n", str);
} */