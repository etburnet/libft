/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:40:06 by eburnet           #+#    #+#             */
/*   Updated: 2023/10/17 09:51:29 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (s);
}

/* #include <stdio.h>
int	main(void)
{
	char str[50] = "GeeksForGeeks is for programming geeks."; 
	ft_memset(str + 13, '.', 8*sizeof(char));
	//memset(str + 13, '.', 8*sizeof(char)); 
	printf("%s", str);
} */