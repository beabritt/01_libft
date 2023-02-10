#include<stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int	main(void)
{
	int	x;

	x = 90;
	printf("%c \n", ft_tolower(x));
	return (0);
}
