#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	if (dstsize > 0)
	{
		i = 0;
		while (i < dstsize && src[i] != '\0')
		{
			dst[i] = src[i];
			i ++;
		}
		dst [i] = '\0';
		return (i);
	}
	else
		return (1);
}