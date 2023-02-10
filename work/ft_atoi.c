#include<stdio.h>

/*espacios blancos, signos y numeros*/
int	ft_atoi(const char *str)
{
	int	x;
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	if (str == (void *)0)
		return (0);
	x = 0;
	while ((str[x] == 32 || (str[x] >= 9 && str[x] <= 13)))
	{
		x++;
	}	
	if (str[x] == '-')
		sign *= -1;
	if (str[x] == '-' || str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		num = num * 10 + (str[x] - '0');
		x++;
	}
	return (num * sign);
}

int	main(void)
{
	char 	str [10] = "+123a";

	printf("%d \n", ft_atoi(str));
	return (0);
}