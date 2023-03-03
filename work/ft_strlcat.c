/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:50:45 by becamino          #+#    #+#             */
/*   Updated: 2023/01/29 14:46:00 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	l_src;
	size_t	l_dst;

	l_src = ft_strlen(src);
	l_dst = ft_strlen(dst);
	x = 0;
	if (l_dst > dstsize)
		return (l_src + dstsize);
	while (dst && x < dstsize - l_dst - 1)
	{
	dst[l_dst + x] = src [x];
	x++;
	}
	dst[l_dst + x + 1] = '\0';
	return (l_src + l_dst);
}

/*int	main(void)
{
	char	dst[14] = "a";
	char	src[] = "lorem ipsum dolor sit amet";
	size_t	dstsize;

	dstsize = 15;
	ft_strlcat(dst, src, dstsize);
	return (0);
}*/