/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:34:48 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/08 11:11:38 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		newstr[i] = f(i, str[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/* #include <stdio.h>
int	main()
{
	char str[] = "salut";
	printf("%s\n", ft_strmapi(str, my_function));
} */