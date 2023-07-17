#include<libft.h>

/*Add the node "new" at the beginning
of the list.*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{

}

int	main(void)
{
	t_list	*lst;
	t_list	*new;
	int		y;
	void	*x;

	y = 59;
	x = &y;
	new = ft_lstnew(x);
	ft_lstadd_front(lst, new);
	return(0);
}