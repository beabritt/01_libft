#include<unistd.h>

/*copia n bytes del area de mem src al area dst. 
Si dst y src se superponen, behaviour is undefined.*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			cont;
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (char *)src;
	cont = 0;
	while (cont < n)
	{
		d[cont] = s[cont];
		cont ++;
	}
	return (dst);
}

/*int	main(void)
{
	char		dst [30] = "Hola Pepita";
	const char	src [] = "Jacinta";
	size_t		n;

	n = 5;
	ft_memcpy(dst, src, n);
	return (0);
}*/
