#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_search(const char *s, char c)
{
	size_t	x;

	x = 0;
	while (s[x] != '\0' && s[x] != c)
		x++;
	return (x);
}

static size_t	ft_wcounter(char const *s, char c)
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

static char ft_strs(const char *s, int x, size_t y)
{
	size_t	a;
	char	*arr;
	a = 0;
	arr[a] = ft_substr(s, y, x - y + 1);
	a++;
	if (!arr[a])
		while (arr[a])
			free (arr[a--]);
	if (s[x] = '\0')
		arr[a] = ft_calloc(1, sizeof(char));
		arr[a][0] = '\0';
}

char	**ft_split(char const *s, char c)
{
	int 	x;
	size_t	y;
	size_t	wc;
	size_t	a;
	char	**arr;

	if (!s)
		return (0);
	wc = ft_wcounter(s, c);
	arr = (char**)ft_calloc(wc, sizeof(char));
	if (!arr)
		return (0);
	x = -1;
	while (s[x] != '\0')
	{	
		while (s[x + 1] != '\0' && s[x] == c)
			x++;
		if (x < 0)
			y = 0;
		else
			y = x;
		x = ft_search(&s[x + 1], c);
		a = 0;
		while (a <= wc)
		{
			arr[a] = ft_strs(s, x, y);
			a++;
		}
	return (arr);
}

int	main(void)
{
	char	s[14] = "Que puto frio";
	char	c;
	char	**array;

	c ='p';
	array = ft_split(s, c);
	free (array);
	return (0);
}