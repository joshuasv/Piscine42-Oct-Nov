/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 15:50:35 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/31 16:03:38 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 0 && str[index] <= 31))
		{
			return (0);
		}
		index++;
	}
	return (1);
}
