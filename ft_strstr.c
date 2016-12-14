/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 01:53:48 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/15 01:54:32 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	len;

	len = ft_strlen(little);
	if (len == 0)
		return ((char*)big);
	while (*big != 0)
	{
		if (ft_memcmp(big, little, len) == 0)
			return ((char*)big);
		big++;
	}
	return (NULL);
}
