/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 03:50:48 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/15 03:50:49 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;
	t_list *temp;

	new = NULL;
	if (!(temp = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (temp)
	{
		if (content != NULL)
		{
			if (!(temp->content = (t_list*)malloc(content_size)))
				return (NULL);
			temp->content = ft_memcpy((temp->content), content, content_size);
			temp->content_size = content_size;
		}
		if (content == NULL)
		{
			temp->content = NULL;
			temp->content_size = 0;
		}
		temp->next = NULL;
		new = temp;
	}
	return (new);
}
