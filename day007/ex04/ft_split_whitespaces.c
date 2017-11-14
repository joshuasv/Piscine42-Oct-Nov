/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 23:29:28 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/02 23:31:45 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		size(char *str)
{
	int size;

	size = 0;
	while (*str != 0 && *str != 32 && *str != 9 && *str != 10)
	{
		str++;
		size++;
	}
	return (size);
}

char	*ft_strndup(char *src, int n)
{
	char	*dup;
	int		i;

	dup = malloc(n + 1);
	i = 0;
	while (i < n)
		dup[i++] = *src++;
	dup[i] = 0;
	return (dup);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	char	**arr;
	char	*iter;
	char	**dest;

	i = 0;
	iter = str;
	while (*iter != '\0')
	{
		i += (0 != size(iter));
		iter += size(iter);
		iter += (*iter != 0);
	}
	arr = malloc((i + 1) * sizeof(char*));
	iter = str;
	dest = arr;
	while (*iter != '\0')
	{
		if (size(iter))
			*dest++ = ft_strndup(iter, size(iter));
		iter += size(iter);
		iter += (*iter != 0);
	}
	*dest = 0;
	return (arr);
}
