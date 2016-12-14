/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 04:30:49 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/11 04:30:51 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long value;

	value = n;
	if (value < 0)
	{
		ft_putchar_fd('-', fd);
		value *= -1;
	}
	if (value > 9)
		ft_putnbr_fd(value / 10, fd);
	ft_putchar_fd(((value % 10) + 48), fd);
}
