/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:26:29 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/17 17:00:43 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = NULL;
	i = 0;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		*str = '\0';
		str++;
		i++;
	}
	return (str);
}

/* #include <unistd.h>
#include <stdio.h>
int main()
{
	char *newStr = ft_strnew(5);
	if (newStr != NULL) 
		printf("Done\n");
	else
		printf("KO\n");
	return 0;
} */