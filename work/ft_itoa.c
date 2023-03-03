/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:57:48 by becamino          #+#    #+#             */
/*   Updated: 2023/03/03 15:57:51 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include "libft.h"

static int	my_counter(int n)
{
	int	cont;

	cont = 0;
	if (n < 0)
	{
		cont++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		cont++;
	}
	return (cont);
}

static int	ft_div(int n)
{
	int	x;

	x = n;
	if (x > 9)
	{
		n = (n % 10) + '0';
		return (n);
	}
	else
		return (n + '0');
}

char	*ft_wstr(char *s, size_t cont, int n)
{
	size_t	x;
	char	c;

	x = 0;
	if (n < 0)
	{
		s[x] = '-';
		x++;
	}
	n = -n;
	while (cont > 2)
	{
		c = (ft_div(n));
		n = n / 10;
		s[cont - 2] = c;
		cont--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	c;
	char	*s;
	size_t	cont;
	size_t	x;

	x = 0;
	cont = my_counter(n) + 1;
	s = calloc(cont, sizeof(char));
	if (n < 0)
		s = ft_wstr(s, cont, n);
	if (n >= 0)
	{
		while (cont > 1)
		{
			c = (ft_div(n));
			n = n / 10;
			s[cont - 2] = c;
			cont--;
		}
	}
	return (s);
}

int	main(void)
{
	char	*s;

	s = ft_itoa(-556);
	printf("%s \n", s);
	return (0);
}
