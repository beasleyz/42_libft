/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 04:48:20 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/11 04:48:31 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char *mem;

	mem = (unsigned char*)str;
	while (len > 0)
	{
		*mem++ = (unsigned char)c;
		len--;
	}
	return (str);
}
