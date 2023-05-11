/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:26:47 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/16 18:59:37 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*go;

	if (!lst || !new)
		return ;
	go = *lst;
	if (!go)
		*lst = new;
	else
	{
		while (go->next)
			go = go->next;
		go->next = new;
	}
}
