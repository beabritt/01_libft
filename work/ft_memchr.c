#include<stdio.h>

/*localiza la primera coincidencia de c (convertido a unsigned char) 
en la cadena s.
Devuelve un puntero a ese bite o NULL si no existe*/

void *ft_memchr (const void *s, int c, size_t n)
{
    unsigned char	*s2;
    size_t			x;

	s2 = s;
	x = 0;
    if (!n)
        return (NULL);
    while (s2[x] && x < n && s2[x] != c)
    {
    	x++;
    }
    if (s2[x] == c)
        return ((void*)&s2[x]);
    else
		return (NULL);

}

int main (void)
{
    char    s [30] = "Lucrecia no tiene pan";
    int c = 110; 
    size_t  n = 10;
    printf("%s \n", (char *)ft_memchr(s, c, n));
}