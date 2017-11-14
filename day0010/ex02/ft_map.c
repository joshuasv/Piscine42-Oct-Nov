/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:05:40 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/07 23:35:18 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *to_return;
	int index;

	index = 0;
	to_return = malloc(sizeof(int) * length);
	while (index < length)
	{
		to_return[index] = f(tab[index]);
		index++;
	}
	return (to_return);
}
