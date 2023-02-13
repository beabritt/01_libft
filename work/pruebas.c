#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*size_t	ft_strlen(const char *s);*/

char	*ft_strchr(const char *s, int c)
{
	int	x;
	int	slen;

	slen = strlen(s);
	
	x = 0;
	while (x <= slen && (x >= 0 && x <= 255))
	{
		if ((char)s[x] == (char)c)
			return ((char *)&s[x]);
		else
			x++;
	
	}
	return ((char *)&s[x + 1]);
	
}

int	main(void)
{	
    printf("%s \n", ft_strchr( "teste", '\0'));
	return (0);
}
