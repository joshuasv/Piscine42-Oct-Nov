/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 12:27:36 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/31 13:21:57 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int index;
	int next;

	index = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[index] != '\0')
	{
		next = index + 1;
		if (str[index] < '0' || str[index] > '9')
		{
			if (str[index] < 'A' || str[index] > 'Z')
			{
				if (str[index] < 'a' || str[index] > 'z')
				{
					if (str[next] >= 'a' && str[next] <= 'z')
						str[next] = str[next] - 32;
				}
			}
		}
		next++;
		index++;
	}
	return (str);
}
