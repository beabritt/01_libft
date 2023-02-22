#include<stdio.h>
#include<stdlib.h>
#include "libft.h"

/* Applies function f to every char of string s. It generates a new string
	with the successive result of f
	Par: - s1
		 - the f function to apply */

char	mi_toupper(unsigned int x, char c)
{
	if (x)
		if (c >= 97 && c <= 122)
			return (c - 32);
	return ('\0');
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	x;
	char	*res;
	
	res = ft_strdup(s);
	if (!res)
		return (NULL);
	x = 0;
	while(s[x])
	{
		res[x] = (*f)(x, res[x]);
		x++;
	}
	return (res);

}

int	main(void)
{
	char const	s [] = "hace mal dia";
	char	*p;
	

	p = ft_strmapi(s,(*f)(0, 'h'));
	printf("%s \n", p);
	free (p);
	return (0);
}