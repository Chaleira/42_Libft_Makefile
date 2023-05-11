/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:07:05 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/16 18:59:27 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;
	t_list	*last;

	if (!lst || !f)
		return ;
	ptr = lst;
	while (ptr)
	{
		last = ptr;
		ptr = ptr->next;
		f(last->content);
	}
}
