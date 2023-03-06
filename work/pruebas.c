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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	x;
	size_t	y;

	dlen = ft_strlen(dst);
	//printf("%zu \n", dlen);
	slen = ft_strlen(src);
	if (dlen > dstsize)
		return(slen + dstsize);
	else
	{
		x = dlen;
		y = 0;
		while (src[y] && x < dstsize - 1)
		{
			dst[x] = src[y];
			x++;
			y++;
		}
		dst[x] = '\0';
		//printf("%s \n", dst);
		return (dlen + slen);
	}
}

int	main(void)
{
	char	dst[30] = "B";
	char	src[] = "123";
	size_t	dstsize;
	size_t	x;

	dstsize = 0;
	x = ft_strlcat(dst, src, dstsize);
	printf("%zu \n", x);
	return (0);
}