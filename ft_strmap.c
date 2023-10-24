/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:57:03 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/17 17:01:11 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/* char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
} */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;
	char	*newstr;

	i = 0;
	str = (char *)s;
	newstr = NULL;
	newstr = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (newstr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		newstr[i] = f(str[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/* #include <stdio.h>
int	main()
{
	char str[] = "Salut guys";
	printf("%s\n", ft_strmap(str, ft_toupper));
} */