#include <stdio.h>
#include <stdlib.h>
//#include "libft.h"

#include<unistd.h>

static int	ft_wcounter(char const *s, char c)
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

int main() 
{
	size_t	cont;

	cont = ft_wcounter("Que puto frio", 'p');
	printf("%zu \n", cont);
	return (0);
}
