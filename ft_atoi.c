/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 04:57:05 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/11 04:57:06 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
	int		i;
	int		neg;
	size_t	num;

	i = 0;
	neg = 1;
	num = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if ((str[i] == '+' && ft_isdigit(str[i + 1]) == 1))
		i++;
	if (str[i] == '-')
	{
		neg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}
