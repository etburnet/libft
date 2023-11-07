/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:07:24 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/07 13:46:35 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, int n)
{
	int		i;
	int		destlen;
	int		srclen;
	int		total_len;
	char	*sr;

	sr = (char *)src;
	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(sr);
	while (sr[i] && i < n)
	{
		dest[destlen + i] = sr[i];
		i++;
	}
	dest[destlen + i] = '\0';
	total_len = destlen + srclen;
	if (total_len >= n)
		return (n);
	return (total_len);
}

/* #include <stdio.h>
int	main(void)
{
	char	dest[8] = "Yo ";
	const char	*src = "c";

	printf("%d\n", ft_strlcat(dest, src, 5));
	printf("%s", dest);
} */