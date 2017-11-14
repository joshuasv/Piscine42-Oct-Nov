/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 14:37:32 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/31 15:32:27 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 'A' && str[index] <= 'Z'))
		{
			if (!(str[index] >= 'a' && str[index] <= 'z'))
			{
				return (0);
			}
		}
		index++;
	}
	return (1);
}
