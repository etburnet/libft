/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:07:24 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/09 09:56:32 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dst_len;
	size_t		src_len;
	size_t		total_len;

	i = 0;
	src_len = ft_strlen((char *)src);
	dst_len = ft_strlen(dst);
	total_len = dst_len + src_len;
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && dst_len < size - 1)
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	if (dst_len < size)
		dst[dst_len] = '\0';
	if (dst_len > size)
		return (size + src_len);
	return (total_len);
}

/* #include <stdio.h>
int	main(void)
{
	char	dest[8] = "BBBB";
	const char	*src = "AAAAAAAAA";

	printf("%ld\n", ft_strlcat(dest, src, 3));
	printf("%s", dest);
} */