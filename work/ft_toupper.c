#include<stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

int	main(void)
{
	int	x;

	x = 123;
	printf("%c \n", ft_toupper(x));
	return (0);
}
