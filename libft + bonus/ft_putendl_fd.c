#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include "libft.h"

/*Send s string to a given fd, followed by a line break */

void	ft_putendl_fd(char *s, int fd)
{
	size_t	slen;

	slen = ft_strlen(s);
	write(fd, s, slen);
	write(fd, "\n", 1);
}

/*int	main(void)
{
	char	str[] = "hace buen dia";

	ft_putendl_fd(str, 1);
	return (0);
}*/
