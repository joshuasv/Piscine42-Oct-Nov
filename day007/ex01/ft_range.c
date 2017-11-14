/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 22:13:25 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/13 14:42:51 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int index;
	int diff;

	index = 0;
	diff = max - min;
	range = malloc(diff);
	if (range == NULL || min >= max)
	{
		return (NULL);
	}
	while (min < max)
	{
		range[index] = min;
		index++;
		min++;
	}
	return (range);
