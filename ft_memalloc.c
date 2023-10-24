/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:20:17 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/17 09:59:15 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void			*var;
	unsigned char	*ptr;
	size_t			i;

	var = NULL;
	i = 0;
	var = malloc(size);
	ptr = var;
	if (var == NULL)
		return (NULL);
	while (i < size)
	{
		*ptr = 0;
		ptr++;
		i++;
	}
	return (var);
}

/* #include <stdio.h>
#include <unistd.h>
int main()
{
	void *newVar = ft_memalloc(5);
	if (newVar != NULL) 
		printf("Done\n");
	else
		printf("KO\n");
	return 0;
} */