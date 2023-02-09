/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:37:20 by becamino          #+#    #+#             */
/*   Updated: 2023/02/09 14:37:23 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	if (!n)
		return (0);
	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1 [10] = "Hola Juan";
	char	s2 [10] = "Hola Pedro";
	size_t	n;
	
	n = 10;
	printf("%i \n", ft_strncmp (s1, s2, n));
	return (0);
}*/
