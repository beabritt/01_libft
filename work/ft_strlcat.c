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
	int	y;
	int	l_src;
	int	l_dst;

	l_src = ft_strlen(src);
	printf("*********%d\n", l_src);
	l_dst = ft_strlen(dst);
	printf("**********%d\n", l_dst);
	y = 0;
	if (l_dst > dstsize)
		return (l_src + dstsize);
	while (y < dstsize - l_dst - 1)
	{
	dst[l_dst + y] = src [y];
	y++;
	}
	dst[l_dst + y + 1] = '\0';
	return (l_src + l_dst);
}
