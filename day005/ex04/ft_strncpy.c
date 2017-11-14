/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 13:45:19 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/31 02:19:53 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	source_length(char *src)
{
	unsigned int len;

	len = 0;
	while (*src != '\0')
	{
		len++;
		src++;
	}
	return (len);
}

void			fill_zeros(int difference, char *dest, int i)
{
	while (difference > 1)
	{
		dest++;
		*dest = '\0';
		i++;
		difference--;
	}
}

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	src_len;
	unsigned int	difference;
	int				i;

	i = 0;
	src_len = source_length(src);
	difference = n - src_len;
	while (n > 0)
	{
		if (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
			i++;
		}
		n--;
	}
	if (src_len < n)
		fill_zeros(difference, dest, i);
	dest++;
	*dest = '\0';
	return (dest - i - 1);
}
