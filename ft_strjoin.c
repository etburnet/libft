/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:17:34 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/07 13:46:38 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		i;
	char	*result;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	lens1 = ft_strlen(str1);
	i = 0;
	result = NULL;
	result = malloc(sizeof(char) * (lens1 + ft_strlen(str2) + 1));
	while (str1[i] != '\0')
	{
		result[i] = str1[i];
		i++;
	}
	i = 0;
	while (str2[i] != '\0')
	{
		result[lens1 + i] = str2[i];
		i++;
	}
	result[lens1 + i] = '\0';
	return (result);
}

/* #include  <stdio.h>
int main()
{
	char s1[] = "hey";
	char s2[] = ", cv ?";
	printf("%s", ft_strjoin(s1, s2));
} */