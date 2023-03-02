#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include "libft.h"

static int	ft_search(const char *s, char c, int x)
{
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

static void	*ft_free(char **arr, size_t a)
{
	while (!arr[a])
	{
		free(arr[a]);
		a--;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
    int       x;
    size_t    y;
    size_t    a;
    char    **arr;
	size_t	wc;

    arr = (char **)calloc(ft_wcounter(s, c)+ 1, sizeof(char *));
	wc = ft_wcounter(s, c);
	printf("%zu \n", wc);
    if (!arr || !s)
        return (0);
    x = 0;
    a = 0;
    while (s[x] != '\0')
    {    
        while (s[x] == c)
            x++;
		y = x;
        x = ft_search(s, c, x);
        arr[a] = ft_substr(s, y, x - y);
        if (!arr[a])
			return (ft_free(arr, a));
        a++;
    }
   	//arr[a] = calloc(1, sizeof(char));
    return (arr);
}

int	main(void)
{
	//char	s[14] = "Que puto frio";
	char	c;
	char	**array;

	c = ' ';
	array = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse   ", c);
	printf("%s$\n", array[0]);
	printf("%s$ \n", array[1]);
	printf("%s$ \n", array[2]);
	printf("%s$ \n", array[3]);
	printf("%s$ \n", array[4]);
	printf("%s$ \n", array[5]);
	printf("%s$ \n", array[6]);
	printf("%s$ \n", array[7]);
	printf("%s$ \n", array[8]);
	printf("%s$ \n", array[9]);
	printf("%s$ \n", array[10]);
	printf("%s$ \n", array[11]);
	printf("%s$ \n", array[12]);
	free (array);
	return (0);
}