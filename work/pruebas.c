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
#include "libft.h"

#include<stdio.h>
#include "libft.h"

/*	if (haystack == (void *)0 || needle == (void *)0)
		return (NULL);
	busca str2 en str1 en un n numero de bytes*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	while (x < len && haystack[x] != '\0' && needle[y] != '\0')	
	{
		while (x < len && haystack[x] != needle[y]
		&& haystack[x] != '\0')
			x++;
		if (x == len || haystack[x] == '\0')
			return (0);
		else
			while (x < len && haystack[x] == needle[y] 
					&& needle[y] != '\0')
			{	
				x++;
				y++;
			}
	}
	if ((haystack[x - y] == needle[0] && needle[y] == '\0') || needle[y] == '\0')
		return ((char *)&haystack[x - y]);
	else
		return (0);
}

/*int main(void)
{
    char    h [] = "lorem ipsum dolor sit amet";
	char	*s;
    size_t  len;

    len = 30; 
    s =  ft_strnstr(h, "ipsum", len);
	printf("%s \n", s);
    return (0);
}*/