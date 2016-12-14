/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 01:42:28 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/15 01:47:05 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	init;
	size_t	j;

	j = 0;
	i = 0;
	while (dst[i] != '\0' && i < size)
	{
		i++;
	}
	init = i;
	while (i < size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (init < size)
		dst[i] = '\0';
	return (init + ft_strlen(src));
}
