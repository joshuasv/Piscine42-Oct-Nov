/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 21:08:11 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/02 15:41:17 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length(char *src)
{
	int len;

	len = 0;
	while (*src != '\0')
	{
		len++;
		src++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;

	len = length(src);
	copy = malloc(len + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	ft_strcpy(copy, src);
	return (copy);
}
