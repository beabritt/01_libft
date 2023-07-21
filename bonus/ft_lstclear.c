#include "libft.h"

//Deletes and free the node 'lst' and consecutives,
//using 'del' and free. The pointer to the list must be NULL.

/*void	ft_del(void *p)
{
	p = (void *)0;
}*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*tofree;

	if (!*lst || !del)
		return ;
	aux = *lst;
	while (aux->next != NULL)
	{
		del(aux->content);
		tofree = aux;
		aux = aux->next;
		free (tofree);
	}
	del(aux->content);
	free (aux);
}
/*int main(void)
{

}*/
