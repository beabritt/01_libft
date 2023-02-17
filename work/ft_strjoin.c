#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	size_t	slen2;
	size_t	slen1;
	void	*s3;

	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	x = slen1 + slen2 + 1;
	s3 = malloc(x);
	if (!s3)
		return (0);
	ft_strlcpy (s3, s1, slen1 + 1);
	ft_strlcpy (&s3[slen1], s2, slen2 + 1);
	return (s3);
}

/*int	main(void)
{
	char	s1[4] = "Bea";
	char	s2[15] = "tiene hambre";
	char	*s3;

	s3 = ft_strjoin(s1, s2);
	printf("%s \n", s3);
	free (s3);
	return (0);
}*/