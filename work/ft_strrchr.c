#include<stdio.h>

/*size_t	ft_strlen(const char *s);*/

char	*ft_strrchr(const char *s, int c)
{
	int	x;
	int	slen;

	slen = ft_strlen(s);
	if (slen == 0)
		return (NULL);
	else
	{
		x = slen;
		while (x <= slen && x >= 0)
		{
			if (s[x] == c)
				return ((char *) &s[x]);
			else
				x--;
		}
		return (NULL);
	}
}

/*int	main(void)
{
	char	s [] = "Pepita tiene frio";
	int	c = 110;
    printf("%s \n", ft_strrchr(s, c));
	return (0);
}*/