#include <stdio.h>
#include <stdlib.h>
//#include "libft.h"

int funcion(int (*p)(int));
int	ft_toupper(int c);

int	main (void)
{
	int	x;

	x = funcion (ft_toupper);
	printf("%d \n", x);
	return 0;
}

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

int	funcion(int	(*p)(int))
{
	int	x;

	x = p(104);
	printf("%c \n", (char)x);
	return x;
}

int i;
i = -1; // 0
while (str[++i]) // str[0]
{ // str[0]
 
}