/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:33:50 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/06 16:20:26 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

EDITED

#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static int	ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	char	*result;
	char	*str;
	int		i;
	int		j;
	int		strlen;

	i = 0;
	j = 0;
	str = (char *)s;
	strlen = ft_strlen(str);
	result = NULL;
	result = malloc(sizeof(char) * (strlen + 1));
	if (result == NULL)
		return (NULL);
	if (!ft_is_whitespace(str[0]) || !ft_is_whitespace(str[strlen -1]))
		return ((char *)s);
	while (ft_is_whitespace(str[i]))
		i++;
	strlen -= 1;
	while ((ft_is_whitespace(str[strlen])))
		strlen--;
	while (str[i] != '\0' && i <= strlen)
		result[j++] = str[i++];
	result[j] = '\0';
	return (result);
}

/* #include <stdio.h>
int main(void)
{
	char str[] = " Salut    les gars cv   ? ";
	printf("%s", ft_strtrim(str));
} */