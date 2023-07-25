/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:55:24 by becamino          #+#    #+#             */
/*   Updated: 2023/07/25 15:36:34 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Iters 'lst' list and applies 'f' function to the content of every node.
//Creates a list with the result of every 'f' application.
//Function 'del' is used to delete the content of a node, if its necesary.

/*void function(void *p)
{
    
}

void    del(void *p)
{
    
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dupe;
	t_list	*aux;

	if (!lst || !f || !del)
		return ;
	dupe = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst != NULL)
	{
		aux = ft_lstnew(f(lst->content));
		ft_lstadd_back(dupe, aux);
		ft_lstdelone(aux);
		lst = lst->next;
	}
	return (dupe);
}
/*int main (void)
{
    t_list  *lst;
    void    (*f)(void *);
    void    (*del)(void *);
    
    f = &f;
    del = &del;
    ft_lstmap(lst, f, del);
    return (0);
}*/
