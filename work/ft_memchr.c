/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:26:24 by becamino          #+#    #+#             */
/*   Updated: 2023/02/09 13:26:29 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

/*localiza la primera coincidencia de c (convertido a unsigned char) 
en la cadena s.
Devuelve un puntero a ese bite o NULL si no existe*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	unsigned char	i;
	size_t			x;

	s2 = (unsigned char *)s;
	i = (unsigned char)c;
	x = 0;
	if (!n)
		return (NULL);
	if (i > 255)
		return (NULL);
	while (s2[x] != '\0' && x < n - 1 && s2[x] != i)
	{
		x++;
	}
	if (s2[x] == i)
		return ((void *)&s2[x]);
	else
		return (NULL);
}

/*int	main(void)
{
	char    s [30] = "Lucrecia no tiene pan";
	int c = 110; 
	size_t  n = 10;
	printf("%s \n", (char *)ft_memchr(s, c, n));
}*/