/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 11:24:33 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/31 11:48:28 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != 0 || s2[index] != 0)
	{
		if (s1[index] < s2[index])
		{
			return (-1);
		}
		else if (s1[index] > s2[index])
		{
			return (1);
		}
		else if (s1[index] == s2[index])
		{
			index++;
		}
	}
	return (0);
}
