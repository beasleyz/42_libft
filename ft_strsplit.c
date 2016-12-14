/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeasley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 03:19:51 by zbeasley          #+#    #+#             */
/*   Updated: 2016/11/11 03:19:55 by zbeasley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char		*fill_str(const char *s, int wlen, int i)
{
	char *str;

	str = (char*)malloc(wlen * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[wlen] = '\0';
	while (wlen > 0)
	{
		str[wlen - 1] = s[i - 1];
		wlen--;
		i--;
	}
	if (s[0] == '\0')
		str[0] = '\0';
	return (str);
}

static	char		*split_word(const char *s, char c, int w)
{
	char	*str;
	int		wlen;
	int		i;
	int		count;

	wlen = 0;
	i = 0;
	count = 0;
	while (count < w && s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c && i != 0)
			count++;
		i++;
	}
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		wlen++;
	}
	str = fill_str(s, wlen, i);
	if (wlen == 0)
		return (NULL);
	return (str);
}

char				**ft_strsplit(char const *s, char c)
{
	int		i;
	int		count;
	char	**array;

	i = 0;
	if (!s)
		return (NULL);
	count = ft_countword(s, c);
	if (!(array = (char**)malloc((count + 1) * sizeof(char*))))
		return (NULL);
	i = 0;
	while (i < count)
	{
		array[i] = split_word(s, c, i);
		i++;
	}
	array[i] = NULL;
	return (array);
}
