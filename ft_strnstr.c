/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 03:45:49 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/15 03:47:02 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	size;

	size = ft_strlen(lit);
	if (size == 0)
		return ((char*)big);
	while (*big != '\0' && len)
	{
		if (size > len)
			return (NULL);
		if (ft_memcmp(big, lit, size) == 0)
			return ((char*)big);
		big++;
		len--;
	}
	return (NULL);
}
