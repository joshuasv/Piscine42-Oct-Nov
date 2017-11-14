/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 16:40:29 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/28 23:43:19 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{	
	
	if (power == 0)
	{
		return (1);
	}
	if (power > 1)
	{
		return (nb *= ft_recursive_power(nb, power - 1));
	}
	else
	{
		return (nb);
	}
	return (0);
}
