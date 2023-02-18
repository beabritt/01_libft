/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:34:32 by becamino          #+#    #+#             */
/*   Updated: 2023/02/18 19:34:35 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	slen;
	size_t	x;
	size_t	y;
	size_t flen;

	x = 0;
	slen = ft_strlen(s1);
	y = ft_strlen(s1) - 1;
	while (ft_memchr((const void *)set, (int *)&s1[x], 1) != NULL)
	{
		x++;
	}
	while (ft_memchr((const void *)set, (int *)&s1[y], 1) != NULL)
	{
		--y;
	}
	flen = (slen - x) - (slen - 1 - y);
	res = malloc(flen);
	ft_strlcpy(res, &s1[x], flen);
	return (res);
}

int	main(void)
{
	char 	s1[15] = "Soy Bea Camino";
	char	set[4] = "So";
	char	*p;

	p = ft_strtrim (s1, set);
	printf("%s \n", p);
	free (p);
	return (0);
}