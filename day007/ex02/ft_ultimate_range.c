/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsoutelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 09:25:34 by jsoutelo          #+#    #+#             */
/*   Updated: 2017/11/02 16:30:02 by jsoutelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int index;
	int diff;
	int *temp;

	diff = max - min;
	*range = malloc(diff + 1);
	index = 0;
	temp = *range;
	if (*range == NULL || min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (min < max)
	{
		temp[index] = min;
		index++;
		min++;
	}
	return (diff);
}
