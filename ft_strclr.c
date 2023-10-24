/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:59:40 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/17 10:56:42 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		s[i++] = '\0';
	}
}

/* #include <string.h>
#include <stdio.h>
int	main()
{
	char str[] = "Salut les gars";
	ft_strclr(str);
	if (str[0] == '\0')
		printf("Done\n");
	else
		printf("KO\n");	
} */