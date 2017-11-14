/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:05:42 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/02 15:51:14 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		lenght(char *src)
{
	int len;

	len = 0;
	while (*src != '\0')
	{
		src++;
		len++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int index;
	int src_len;

	index = 0;
	src_len = lenght(src);
	while (dest[index] != '\0')
	{
		src[src_len] = dest[index];
		src_len++;
		index++;
	}
	src[src_len] = '\0';
	return (src);
}
