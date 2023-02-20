/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:06:14 by becamino          #+#    #+#             */
/*   Updated: 2023/02/20 19:06:20 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_search(char const *s1, char const *set)
{

}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	slen;
	size_t	x;
	size_t	y;

	if (!s1)
		return (0);
	x = 0;
	slen = ft_strlen(s1);
	if (slen == 0)
		return (ft_strdup(""));
	y = ft_strlen(s1) - 1;
	
	while (ft_strchr(set, (int)s1[x]) != NULL && x < slen)
	{
		x++;
	}
	while (ft_strchr(set, (int)s1[y]) != NULL &&  y > 0)
	{
		--y;
	}	
	if (x <= y)
	{	
		res = (char *)malloc(y - x + 2);
		if (!res)
			return(NULL);
		ft_strlcpy(res, &s1[x], y - x + 2);
		return (res);
	}
	else
		return (ft_calloc(1,1));
}

int	main(void)
{
	char 	s1[] = "";
	char	set[] = "";
	char	*p;

	p = ft_strtrim (s1, set);
	printf("%s \n", p);
	free (p);
	return (0);
}
