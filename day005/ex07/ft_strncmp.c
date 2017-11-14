/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 11:50:15 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/31 12:01:20 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int index;

	index = 0;
	while (n > 0)
	{
		if (s1[index] > s2[index])
		{
			return (1);
		}
		else if (s1[index] < s2[index])
		{
			return (-1);
		}
		else if (s1[index] == s2[index])
		{
			index++;
		}
		n--;
	}
	return (0);
}
