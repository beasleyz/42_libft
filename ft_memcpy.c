/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 03:08:51 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/11 03:09:43 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *buf1;
	unsigned char *buf2;

	buf1 = (unsigned char*)src;
	buf2 = (unsigned char*)dst;
	if (n == 0 || src == dst)
		return (dst);
	while (n-- > 0)
		*buf2++ = *buf1++;
	return (dst);
}
