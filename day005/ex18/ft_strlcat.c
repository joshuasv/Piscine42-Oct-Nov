/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:12:04 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/31 22:29:53 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	dest_length(char *dest)
{
	unsigned int len;

	len = 0;
	while (*dest != '\0')
	{
		dest++;
		len++;
	}
	return (len);
}

unsigned int	src_length(char *src)
{
	unsigned int len;

	len = 0;
	while (*src != '\0')
	{
		src++;
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				index;
	int				index_dest;
	unsigned int	dest_len;
	unsigned int	src_len;
	int				diff;
	
	index = 0;
	dest_len = dest_length(dest);
	index_dest = dest_length(dest);
	src_len = src_length(src);
	diff = size - dest_len;
	if (dest_len > size)
	{
		return (size + src_len);
	}
	size = size - dest_len;
	while (size > 1)
	{
		if (src[index] == '\0')
		{
			return (src_len + dest_len);
		}
		dest[index_dest] = src[index];
		index_dest++;
		index++;
		size--;
	}
	dest[index_dest] = '\0';
	return (src_len + dest_len);
}
