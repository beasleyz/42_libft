/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 04:23:26 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/11 04:23:30 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*buf1;
	unsigned char	*buf2;

	i = 0;
	buf1 = (unsigned char*)src;
	buf2 = (unsigned char*)dst;
	while (i < n)
	{
		buf2[i] = buf1[i];
		if (buf2[i] == (unsigned char)c)
			return ((void*)&dst[i + 1]);
		i++;
	}
	dst = NULL;
	return (dst);
}
