#include<stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;
	size_t	i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (str1[i] == str2[i] && i < n)
		{
			i++;
		}
		return (str1[i] - str2[i]);
}

int	main (void)
{
	char	st1 [0];
	char	st2 [0];
	size_t	l;

	l = 0;
	printf("%d \n", ft_memcmp(st1, st2, l));

	return (0);
}