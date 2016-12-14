/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 03:18:58 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/11 03:19:01 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long value;

	value = n;
	if (value < 0)
	{
		ft_putchar('-');
		value *= -1;
	}
	if (value > 9)
		ft_putnbr(value / 10);
	ft_putchar((value % 10) + 48);
}
