/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:58:13 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/17 09:59:06 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}

/* #include <stdio.h>
int main()
{
	int *var = malloc(sizeof(int) * 10);
	ft_memdel((void**)&var); // transtipage de int** > void**
	if (var == NULL) {
		printf("Done\n");
	} else {
		printf("KO\n");
	}
    return 0;
} */