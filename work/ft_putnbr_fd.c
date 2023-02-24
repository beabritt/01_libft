#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include "libft.h"

/*Send the n number to a given file descrittor*/
static int	my_counter(int n)
{
	int	cont;

	cont = 0;
	while (n > 9)
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

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	char	s [7];
	size_t	cont;
	size_t	slen;

	if (n < 0)
	{	
		write(fd, "-", 1);
		n = -n;
	}	
	if (n > 0)
	{
		cont = my_counter(n) + 1;
		slen = cont + 1;
		while (cont > 0)
		{
			c = (ft_div(n));
			n = n / 10;
			s[cont] = c;
			cont--;
		}
		write(fd, s, slen);
	}
}

int	main(void)
{
	ft_putnbr_fd(-99, 1);
	return (0);
}
