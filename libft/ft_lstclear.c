/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:43:26 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/16 21:39:37 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*last;

	if (!lst || !del)
		return ;
	ptr = *lst;
	while (ptr)
	{
		last = ptr;
		ptr = ptr->next;
		del(last->content);
		free(last);
	}
	*lst = NULL;
}
