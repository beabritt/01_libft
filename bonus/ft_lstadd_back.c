/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:33:54 by becamino          #+#    #+#             */
/*   Updated: 2023/07/18 18:22:16 by becamino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

//Adds 'new' node to the end of the list 'lst'.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	
	if(!lst)
		*lst = new;
	else
	{	
		while(lst != NULL)
		{
			last = *lst;
			
		
		}
	
		last->next = new;
	}
}

int	main(void)
{
	t_list	*new;
	t_list	*lst;
	
	return(0);
}