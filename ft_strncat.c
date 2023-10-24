/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:41:58 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/09 18:01:07 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, const char *src, int n)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (i < n && src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}

/* #include <stdio.h>
int	main(void)
{
	char	dest[8] = "Yo ";
	const char	*src = "cv ?";

	printf("%s", ft_strncat(dest, src, 4));
} */