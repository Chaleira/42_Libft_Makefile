/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:37:06 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/16 18:59:22 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*ptr;

	ptr = NULL;
	while (lst)
	{
		newlst = ft_lstnew(f(lst->content));
		if (!newlst)
		{
			ft_lstclear(&ptr, del);
			return (0);
		}
		ft_lstadd_back(&ptr, newlst);
		lst = lst->next;
	}
	return (ptr);
}
