/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 04:44:21 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/11 04:44:22 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	size_t	num_of_chars;
	size_t	value;

	value = n;
	if (ft_isnegative(n) == 1)
		value *= -1;
	num_of_chars = ft_isnegative(n) + ft_numofdigits(value);
	str = (char*)malloc(num_of_chars + 1);
	if (!str)
		return (NULL);
	str[num_of_chars] = '\0';
	while (value >= 10)
	{
		str[num_of_chars - 1] = value % 10 + 48;
		num_of_chars--;
		value /= 10;
	}
	str[num_of_chars - 1] = value + 48;
	if (ft_isnegative(n) == 1)
		str[0] = '-';
	return (str);
}
