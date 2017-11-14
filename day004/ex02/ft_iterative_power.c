/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 16:39:36 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/27 16:39:42 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power > 0)
	{
		while (power > 0)
		{
			result *= nb;
			power--;
		}
	}
	else
	{
		return (0);
	}
	return (result);
}
