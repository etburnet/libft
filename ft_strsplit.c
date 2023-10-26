/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:30:20 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/26 15:59:05 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	ft_count_words(char *s, char c)
{
	int	word_count;
	int	i;

	word_count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			word_count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (word_count);
}

char	**ft_separation(char *str, char **result, char c)
{
	int		i;
	int		j;
	int		h;

	i = 0;
	j = 0;
	h = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == c && str[i] != '\0')
			i++;
		if (str[i] == '\0')
			break ;
		while (str[i] != c && str[i] != '\0')
		{
			result[h][j] = str[i];
			i++;
			j++;
		}
		result[h][j] = '\0';
		h++;
	}
	result[h] = NULL;
	return (result);
}

char	**ft_strsplit(char const *s, char c)
{
	char	*str;
	int		word_count;
	char	**result;
	int		i;

	i = 0;
	str = (char *)s;
	word_count = ft_count_words(str, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (result == NULL)
		return (NULL);
	while (i <= word_count)
	{
		result[i] = (char *)malloc(257);
		if (result[i] == NULL)
			return (NULL);
		i++;
	}
	return (ft_separation(str, result, c));
}

#include <stdio.h>
int	main()
{
	char **result = ft_strsplit("YO_cv__les__gars__", '_');
	int i = 0;
	while (result[i] != NULL) {
		printf("Partie %d : %s\n", i, result[i]);
		i++;
	}
}