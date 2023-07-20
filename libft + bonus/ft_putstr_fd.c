#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include "libft.h"

/*Send str string to a specified file descrittor*/

void	ft_putstr_fd(char *s, int fd)
{
	size_t	slen;

	slen = ft_strlen(s);
	write(fd, s, slen);
}

/*int	main(void)
{
	char	str[] = "hace buen dia";

	ft_putstr_fd(str, 1);
	return (0);
}*/
