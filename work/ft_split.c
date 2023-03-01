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

static int	ft_search(const char *s, char c, int x)
{
	while (s[x] != '\0' && s[x] != c)
		x++;
	return (x);
}

static size_t	ft_wcounter(char const *s, char c)
{
	size_t	x;
	size_t	cont;

	x = 0;
	cont = 0;
	while (s[x] != '\0')
	{
		while (s[x] != '\0' && s[x] == c)
			x++;	
		while (s[x] != '\0' && s[x] != c)
			x++;
		cont++;
	}
	return (cont);
}

char	**ft_split(char const *s, char c)
{
    int       x;
    size_t    y;
    size_t    wc;
    size_t    a;
    char    **arr;

    if (!s)
        return (0);
    wc = ft_wcounter(s, c);
    arr = (char **)calloc(wc + 1, sizeof(char *));
    if (!arr)
        return (0);
    x = 0;
    a = 0;
    while (s[x] != '\0')
    {    
        while (s[x] != '\0' && s[x] == c)
            x++;
        if (x < 0)
            y = 0;
        else
            y = x;
        x = ft_search(s, c, x);
        arr[a] = ft_substr(s, y, x - y);
        if (!arr[a])
            while (arr[a])
                free (arr[a--]);
        a++;
    }
   	arr[a] = calloc(1, sizeof(char));
    return (arr);
}

int	main(void)
{
	char	s[14] = "Que puto frio";
	char	c;
	char	**array;

	c ='p';
	array = ft_split(s, c);
	printf("%s \n", array[0]);
	printf("%s \n", array[1]);
	printf("%s \n", array[2]);
	free (array);
	return (0);
}