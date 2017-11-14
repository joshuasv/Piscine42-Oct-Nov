/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 15:55:25 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/04 13:39:31 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src);

char	*ft_strndup(char *str, int n);

int		count_words(char *str);

char	*ft_strncpy(char *dest, char *src, int n);

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		size;
	int		i;

	size = count_words(str);
	res = (char**)malloc(sizeof(char*) * (size + 1));
	i = 0;
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		else
		{
			res[i] = ft_strndup(str, ft_strlen(str));
			i++;
			str = str + ft_strlen(str);
		}
	}
	res[i] = 0;
	return (res);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != 0 && *str != ' ' && *str != '\t' && *str != '\n')
	{
		len++;
		str++;
	}
	return (len);
}

int		count_words(char *str)
{
	int		words;
	char	*temp;

	temp = str;
	words = 0;
	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		else
		{
			words++;
			str++;
		}
	}
	return (words);
}

char	*ft_strndup(char *str, int n)
{
	char	*new_str;
	int		len;

	len = 0;
	while (str[len] != 0 && len < n)
		len++;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (*new_str)
		return (0);
	ft_strncpy(new_str, str, n);
	return (new_str);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
