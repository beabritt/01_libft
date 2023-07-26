/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:55:24 by becamino          #+#    #+#             */
/*   Updated: 2023/07/26 13:05:21 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Iters 'lst' list and applies 'f' function to the content of every node.
//Creates a list with the result of every 'f' application.
//Function 'del' is used to delete the content of a node, if its necesary.

/*void function(void *p)
{
    int x;
    
    x = 1;
    *(int *)p = *(int *)p + x;
}

void    del(void *p)
{
    p = (void *)0;
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dupe;
	t_list	*aux;

	if (!lst || !(*f) || !del)
		return (NULL);
	dupe = ft_lstnew((*f)(lst->content));
	lst = lst->next;
	while (lst != NULL)
	{
		aux = ft_lstnew(f(lst->content));
		if (!aux)
		{
			ft_lstclear(&dupe, del);
			return (NULL);
		}
		ft_lstadd_back(&dupe, aux);
		ft_lstdelone(aux, del);
		lst = lst->next;
	}
	return (dupe);
}
/*int main (void)
{
    t_list  *lst;
    void    (*f)(void *);
    void    (*del)(void *);
	void	*x;
	int		y;
	
    y = 1;
	x = &y;
    f = &f;
    del = &del;
	lst = ft_lstnew(x);
    ft_lstmap(lst, f, del);
    return (0);
}*/
