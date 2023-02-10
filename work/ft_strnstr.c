#include<stdio.h>
/*	if (haystack == (void *)0 || needle == (void *)0)
		return (NULL);*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	if (len == 0)
		return ((char *)haystack);
	x = 0;
	y = 0;
	while (x < len && haystack[x] != needle[y] && haystack[x] != '\0')
	{
		x++;
	}
	if (x == len || haystack[x] == '\0')
		return (NULL);
	else
		while (x < len && haystack[x] == needle[y] && haystack[x] != '\0'
			&& needle[y + 1] != '\0')
		{	
			x++;
			y++;
		}
	if (haystack[x] != needle[y])
		return (NULL);
	else
		return ((char *)&haystack[x - y]);
}

/*int main(void)
{
    char    h [25] = "Una aguja en un pajar";
    char    n [0];
    size_t  len;

    len = 20; 
    printf("%s \n", ft_strnstr(h, n, len));
    return (0);
}*/