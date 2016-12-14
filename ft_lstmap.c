/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 01:48:19 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/15 01:48:22 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *end;
	t_list *begin;
	t_list *current;

	begin = NULL;
	while (lst)
	{
		end = f(lst);
		if (!begin)
		{
			begin = end;
			current = end;
		}
		else
		{
			current->next = end;
			current = current->next;
		}
		lst = lst->next;
	}
	return (begin);
}
