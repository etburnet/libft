/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:37:50 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/09 16:02:33 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n)
	{
		*str = '\0';
		str++;
		n--;
	}
}

/* #include <stdio.h>
int	main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks."; 
	ft_bzero(str + 13, 8*sizeof(char));
	//bzero(str + 13, 8*sizeof(char)); 
	printf("%s", str);
} */