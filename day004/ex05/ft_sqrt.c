/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 10:18:34 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/10/28 12:14:32 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int result;

	result = 0;
	while (result * result < nb)
	{
		result++;
	}
	if (result * result > nb)
	{
		return (0);
	}
	else
	{
		return (result);
	}
}
