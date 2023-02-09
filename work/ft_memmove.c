#include<stdio.h>
/*size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);*/

/*Copia len bytes from string src to dst*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	cont;
	int		x;
	char	*temp;

	if (!dst || !src)
		return (NULL);
	if (dst <= src)
	{	
		ft_memcpy (dst, src, len);
		return (dst);
	}
	else
	{	
		x = ft_strlen(src);
		ft_bzero (temp, x);
		ft_strlcpy(temp, src, x);
		cont = 0;
		while (cont < len)
		{	
			*(char *)(dst + cont) = *(temp + cont);
			cont ++;
		}
		return (dst);
	}
}

/*int	main(void)
{
	char	dst[30] = "Hola Juan que tal";
	size_t	len;

	len = 15;
	printf("%s \n",(char*)(ft_memmove (dst + 3, dst, len)));
	return (0);
}*/