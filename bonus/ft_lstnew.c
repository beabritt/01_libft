#include<stdio.h>
#include "libft.h"

/*Creates a new node using malloc.
Content will be the parameter content.
Next will be null*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return(NULL);
	new->content = content;
	new->next = NULL;
	return(new);
}

int	main(void)
{
	t_list	try;
	int	x;

	x = 59;
	try = ft_lstnew(x);
	printf("%i", try.content);
	return(0);
}