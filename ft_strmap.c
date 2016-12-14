/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 20:54:03 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/15 03:48:34 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	str = (char*)malloc(i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (i > 0)
	{
		str[i - 1] = f(s[i - 1]);
		i--;
	}
	return (str);
}
