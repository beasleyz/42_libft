/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numofdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 03:08:32 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/11 03:08:40 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numofdigits(int value)
{
	int count;
	int num;

	count = 0;
	num = value;
	if (num == INT_MIN)
		num += 1;
	if (num < 0)
		num *= -1;
	while (num >= 10)
	{
		num /= 10;
		count++;
	}
	count++;
	return (count);
}
