
#include "libft.h"

//Takes a node 'lst' and free mem of the content usind 'del' function and the node.
//Mem of next must not be free.

//Free memory of the content.
void	ft_del(void *p)
{
	free(p);
}


void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	void	*p;

	p = lst->content;
	(*del)(p);
	free(lst);
}

int	main(void)
{
	t_list	*lst;
	int		y;
	void 	*x;
	void	(*del)(void *);

	y = 59;
	x = &y;
	del = &ft_del;
	lst = ft_lstnew(x);
	ft_lstdelone(lst, del);


	return (0);
}
