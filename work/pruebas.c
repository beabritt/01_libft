#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_search(char const *s1, char const *set)
{
    size_t  s;
    size_t  e;
    size_t  slen;

    slen = ft_strlen(s1);
    e = ft_strlen(s1) - 1;
    s = 0;
    while (ft_strchr(set, (int)s1[s]) != NULL && s < slen)
	{
		s++;
	}
	while (ft_strchr(set, (int)s1[e]) != NULL &&  e > 0)
	{
		--e;
	}	
    return (s, e);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	slen;
	size_t	x;
	size_t	y;

	if (!s1)
		return (0);
	slen = ft_strlen(s1);
	if (slen == 0)
		return (ft_strdup(""));
    x = ft_search(s1, set);	
* Dividir en dos funciones o llamarla dos veces para que me ponga bien en valor en cada variable
	if (x <= y)
	{	
		res = (char *)malloc(y - x + 2);
		if (!res)
			return(NULL);
		ft_strlcpy(res, &s1[x], y - x + 2);
		return (res);
	}
	else
		return (ft_calloc(1,1));
}

int	main(void)
{
	char 	s1[] = "";
	char	set[] = "";
	char	*p;

	p = ft_strtrim (s1, set);
	printf("%s \n", p);
	free (p);
	return (0);
}