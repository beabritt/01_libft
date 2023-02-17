#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

//reserva espacio y devuelve una substring. Es necesario forzar el tamaño de len 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*subs;
	size_t		slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (len > slen)
		len = slen;
	if (start + len > slen)
		len = slen - start;
	if (start >= slen)
	{
		subs = (char *)malloc(1);
		if (!subs)
			return (NULL);
		*subs = 0;
		return (subs);
	}
	subs = (char *)malloc(len + 1);
	if (!subs)
		return (NULL);
	ft_strlcpy(subs, &s[start], len +1);
	return (subs);
}

/*int main(void)
{
    char const		s [15] = "Soy Bea Camino";
	char			*p;
	unsigned int	start;
	size_t			len;

	start = 2;
	len = 5;
	p = ft_substr(s, start, len);
	printf("%s \n", p);
	free (p);
    return (0);
}
	x = 0;
	y = start;
	while (x < len)
	{
		subs[x] = s[y];
		x++;
		y++;
	}
	subs[x] = '\0';*/