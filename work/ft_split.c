/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:07:03 by becamino          #+#    #+#             */
/*   Updated: 2023/02/27 16:07:05 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include "libft.h"

int	ft_search(char const *s, int c)
{
	size_t	x;

	x = 0;
	while (s && s[x] != c)
	{
		x++;
	}
	return (x);
}

char	**ft_split(char const *s, char c)
{
	size_t x;
	size_t	slen;
	size_t	s1len;
	size_t	s2len;
	char	**arr;

	if (!s)
		return (0);
	x = ft_search(s, c);
	slen = ft_strlen(s);
	
	char arr = ft_calloc(2, slen +1);
	ft_strlcpy (arr [1][0],s[0], x) + 1;
	ft_strlcpy (arr [2] [0], s[x], slen - x);
	return ()

}

int	main(void)
{
	char	s[14] = "Que puto frio";
	char	c;

	c ='p';
	ft_split(s, c);

	return (0);
}