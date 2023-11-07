/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:47:40 by eburnet           #+#    #+#             */
/*   Updated: 2023/11/06 17:02:17 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*tab;
	size_t			i;
	unsigned char	*ch_tab;

	i = 0;
	tab = NULL;
	tab = malloc(nmemb * size);
	ch_tab = (unsigned char *)tab;
	if (tab != NULL)
	{
		while (i < nmemb * size)
		{
			*ch_tab = 0;
			ch_tab++;
			i++;
		}
	}
	return (tab);
}

/* int	main()
{
	ft_calloc(5, 5);
} */