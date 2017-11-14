/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 16:23:17 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/31 20:01:38 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		length(char *dest)
{
	int len;

	len = 0;
	while (*dest != '\0')
	{
		dest++;
		len++;
	}
	return (len);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int index;
	int dest_len;

	index = 0;
	dest_len = length(dest);
	while (nb > 0)
	{
		if (src[index] == '\0')
		{
			return (dest);
		}
		dest[dest_len] = src[index];
		dest_len++;
		index++;
		nb--;
	}
	dest[dest_len] = '\0';
	return (dest);
}
