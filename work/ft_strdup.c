#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);*/
/*reserva suf memoria para s1 y la copia en s2*/

char	*ft_strdup(const char *s1)
{
	size_t	x;
	char	*s2;

	x = ft_strlen(s1) + 1;
	s2 = (char *)malloc(x);
	if (!s2)
		return (NULL);
	ft_memcpy((void *)s2, (const void *)s1, x);
	return ((char *)s2);
}

/*int	main(void)
{
	char	s [8] = "Soy Bea";
	char	*s2;
	
	s2 = ft_strdup(s);
	printf("%s \n", s2);
	free (s2);
	return (0);
}*/
