/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 23:21:34 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/12 00:21:56 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int result;
	int index;
	int sign;

	result = 0;
	index = 0;
	sign = 1;
	while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
		index++;
	if (str[index] == '-')
	{
		sign = -1;
		index++;
	}
	if (str[index] == '+')
		index++;
	while (str[index] != '\0')
	{
		result = result * 10 + str[index] - '0';
		index++;
	}
	return (result * sign);
}
