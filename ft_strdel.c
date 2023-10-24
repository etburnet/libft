/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:25:43 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/17 09:58:47 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}

/* #include <stdio.h>
int	main()
{
	char *str = malloc(sizeof(char *) * 10);
	ft_strdel(&str);
	if (str == NULL) {
		printf("Done\n");
	} else {
		printf("KO\n");
	}
    return 0;
} */