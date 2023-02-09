/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:33:57 by becamino          #+#    #+#             */
/*   Updated: 2023/02/09 14:33:59 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

/*size_t	ft_strlen(const char *s);*/

char	*ft_strchr(const char *s, int c)
{
	int	x;
	int	slen;

	slen = ft_strlen(s);
	if (slen == 0)
		return (NULL);
	else
	{
		x = 0;
		while (x <= slen)
		{
			if (s[x] == c)
				return ((char *)&s[x]);
			else
				x++;
		}
		return (NULL);
	}
}

/*int	main(void)
{
	char	s [] = "Pepita tiene frio";
	int	c = 110;
    printf("%s \n", ft_strchr(s, c));
	ft_strchr (s, c);
	return (0);
} */
