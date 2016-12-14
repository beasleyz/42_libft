/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 03:40:26 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/15 03:41:05 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*temp;
	t_list		*temp2;

	if (!alst || !del)
		return ;
	temp = *alst;
	while (temp)
	{
		del(temp->content, temp->content_size);
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
	*alst = NULL;
}
